#include "memory.h"
#include <stdio.h>

char memzero(char *src, int length){
    int i;
    for(i=0;i<length;i++){
        *src++ = 0;
        printf("src: %d \n",*src);
    }
}