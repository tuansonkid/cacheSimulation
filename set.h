#ifndef SET_H
#define SET_H

#include "index.h"

class set{
    private:
        uint8_t INDEX_BITS;
        uint8_t* priorityIndex[];           //store number of index use last
        index* Index[];                     //2 power 2 indexs per set
    public:
        set(uint8_t IndexBits);
        uint8_t readSet(uint32_t);          //return the number of index store tag from 0 to 3
        
        void changePriority(uint8_t);       //Change the priority of index
};

#endif