#ifndef INDEX_CPP
#define INDEX_CPP

#include "index.h"
using namespace std;

//This code for inplement index
index::index(){
    valid = 0;
}

bool index::isValid(){
    return valid;
}

bool index::checkTag(uint32_t Tag){
    return tag == Tag;
}

void index::setValid(){
    valid = 1;
}

void index::writeTag(uint32_t Tag){
    tag = Tag;
}

#endif