#ifndef __MEMORY_H__
#define __MEMORY_H__
/********************************************
* memzero() Takes a pointer to a location 
* in memory and sets its contents to zero
* for a length bytes
* char * src: Pointer starting byte
* int length: Number of bytes to zero out
* char(return): Indicate Success of Failure of the Operation
*********************************************/

char memzero(char *src, int length);

#endif /* __MEMORY_H__ */