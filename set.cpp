#ifndef SET_CPP
#define SET_CPP

#include "set.h"

//This code for inplement set 

set::set(uint8_t IndexBits)
: INDEX_BITS(IndexBits){
    for(int i=0; i < pow(2, INDEX_BITS); i++){
        Index[i] = new index;

    }
}

uint8_t set::readSet(uint32_t Tag){ //return number of index contain tag
    //Read hit
    for(int i=0; i < INDEX_BITS; i++){      
        if(Index[i]->isValid())              //Valid[Index] = 1
            if(Index[i]->checkTag(Tag)){     //Tag[Index] = 1
                return i;                   
            }
    }

    //Read miss empty
    for(int i=0; i<4; i++){                
        if(!Index[i]->isValid()){            //if not valid
            Index[i]->setValid();            //set valid
            Index[i]->writeTag(Tag);         //write Tag to tag
            // Num_of_cache_misses++;
            return i;
        }
    }

    //Read miss not empty
    
    // int temp = tempIndexNumber[0];
    // changePriority(temp);
    // return temp;
}

#endif