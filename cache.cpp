#ifndef CACHE_CPP
#define CACHE_CPP

#include "cache.h"

//This code for inplement cache

cache::cache(uint8_t SetBits, uint8_t IndexBits)
: SET_BITS(SetBits){
    for (int i = 0; i < pow(2, SET_BITS); i++)
        Set[i] = new set(IndexBits);
}

uint8_t cache::readCache(uint32_t address){
    return Set[address & int(pow(2, SET_BITS) - 1)]->readSet(address >> SET_BITS);   //tag = address >> SET_BITS; 

}

// uint32_t cache::getSet(uint32_t address){
//     return address & (int(pow(2,SET_BITS)) - 1);
// }

// uint32_t cache::getTag(uint32_t address){
//     return address >> SET_BITS;
// }

// uint8_t cache::getIndex(uint32_t address){
//     uint32_t set = getSet(address);
//     return Set[set].readEachIndex(getTag(address));
// }

// void cache::display(uint32_t address){
//     // printf("Address: %X \n, Set: %X \n, Tag: %X \n, Number of cache hits: %d \n, Number of cache misses: %d \n, Cache hits ratio: %f \n", address, getSet(address), getTag(address));
//     printf("Address: %X \n, Index: %X \n, Set: %X \n, Tag: %X \n", address, getIndex(address), getSet(address), getTag(address));    
//     // printf("Hihi");
// }

#endif