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

	void *memcopy(void *pvTo, void *pvFrom, size_t size){
		byte *pbTo = (byte *)pvTo;
		byte *pbFrom = (byte *)pvFrom;

		assert (pvTo !=NULL && pvFrom !=NULL);

		while (size-- > 0)
			*pbTo++ = *pbFrom++;

		return (pvTo);
	}

	void swap(void *x, void *y, size_t size){
	    void *tmp =malloc(size);

	    memcopy(tmp,x, size); memcopy(x,y, size); memcopy(y,tmp,size);

	    free(tmp);
	}

	void copy(void *x, void *y, size_t size){
		memcopy (x, y, size);
	}

#ifdef __cplusplus
}
#endif
#endif
