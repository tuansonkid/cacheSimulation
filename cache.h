#ifndef CACHE_H
#define CACHE_H

#include <iostream>
#include <stdint.h>

class index{
    private:
        bool valid;                     //1 bit for valid
        uint32_t tag;                   //32 address bits - 12 bits for set = 20 bits for tag
    public:
        index();
        bool isValid();                 //read Valid
        bool checkTag(uint32_t);        //read tag
        
        void setValid();                 //write valid
        void writeTag(uint32_t);         //write tag
};

class set{
    private:
        uint8_t tempindexNumber;        //store number of index use last
        index Index[4];                 //2 power 2 indexs per set
    public:
        set();
        uint8_t readEachIndex();        //return the number of index store tag from 0 to 3
};

class cache{
    private:
        uint8_t setNumber;              //12 bit for set number
        set Set[4096];                  //2 power 12 sets
    public:
        cache();
        void read(uint32_t address);    //12 first LSB bits = address & 0x 0000 0FFF
                                        //20 bits MSB       = address >> 12
};
#endif  