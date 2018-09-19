#include "utils.h"

extern inline void swap(byte *x, byte *y, size_t size) {
    while (size-- > 0) {
	byte tmp = *x;
	*x++ = *y;
	*y++ = tmp;
    }
}

extern inline void copy(void *x, void *y, size_t size){
    while (size-- > 0) {
	byte *pbTo = (byte*)x;
	byte *pbFrom = (byte*)y;
	*pbTo++ = *pbFrom++;
    }
}
