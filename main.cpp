#include "cache.h"
using namespace std;

#define PROC_SIZE 32                        //processor 32 bits
#define INDEX_BITS 2    
#define SET_BITS 12                         //2^14 / 2^2 = 2^12 sets
// #define TAG_BITS 20                         //32 - 12 = 20 tags

uint32_t address=0x38FA3840;

int instruction=0;



int main(){

        // cache Cache(SET_BITS, INDEX_BITS);

        // if(instruction==0){      //Cache read
        //     Cache.display(address);
        // }
        return 0;
}
