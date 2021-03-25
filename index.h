#ifndef INDEX_H
#define INDEX_H

#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <math.h>

class index{
    private:
        bool valid;                         //1 bit for valid
        uint32_t tag;                       //32 address bits - 12 bits for set = 20 bits for tag
    public:
        index();
        bool isValid();                     //read Valid
        bool checkTag(uint32_t);            //read tag
        
        void setValid();                    //write valid
        void writeTag(uint32_t);            //write tag
};

#endif