#include "xor.h"

void encbuffer(unsigned char* buf,int size ,unsigned char key) {
    int i;
    for (i = 0; i < size ; i++) {
        *(buf + i) = *(buf + i) ^ key;
    }
}

