#include "utils.h"

extern inline void swap(unsigned char *x, unsigned char *y, size_t size) {
    while (size-- > 0) {
	unsigned char c = *x;
	*x++ = *y;
	*y++ = c;
    }
}

extern inline void copy(void *x, void *y, size_t size){
    while (size-- > 0) {
	byte *pbTo = (byte*)x;
	byte *pbFrom = (byte*)y;
	*pbTo++ = *pbFrom++;
    }
}
