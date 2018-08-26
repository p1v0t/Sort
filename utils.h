#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>
#include <assert.h>
#include <stdlib.h>

typedef unsigned char byte;

#ifdef __cplusplus
extern "C"{
#endif


#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

	void swap(unsigned char *x, unsigned char *y, size_t size) {
	    while (size-- > 0) {
		unsigned char c = *x;
		*x++ = *y;
		*y++ = c;
	    }
	}

	void copy(void *x, void *y, size_t size){
	    while (size-- > 0) {
		byte *pbTo = (byte*)x;
		byte *pbFrom = (byte*)y;
		*pbTo++ = *pbFrom++;
	    }
	}

#ifdef __cplusplus
}
#endif
#endif
