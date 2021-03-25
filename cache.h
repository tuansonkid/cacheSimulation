#ifndef CACHE_H
#define CACHE_H

#include "set.h"

class cache{
    private:
        uint8_t SET_BITS;
        set* Set[];                             //2 power 12 sets
    public:
        cache(uint8_t SetBits, uint8_t IndexBits);
        uint8_t readCache(uint32_t address);   //return data of address

        // uint32_t getSet(uint32_t);            
        // uint32_t getTag(uint32_t);
        // uint8_t getIndex(uint32_t);
        // void display(uint32_t);
};
#endif  
