#include "utils.h"
#include <stdlib.h>
#include <assert.h>

//#include <stdio.h>
//void _Assert(char *strFile, unsigned uLine){
//	fflush(NULL);
//	fprintf(stderr, "\nAssertion Failed: %s, line %u\n", strFile, uLine);
//	fflush(stderr);
//	abort();
//}

void *memcpy(void *pvTo, void *pvFrom, size_t size){
	byte *pbTo = (byte *)pvTo;
	byte *pbFrom = (byte *)pvFrom;

	assert (pvTo !=NULL && pvFrom !=NULL);

	while (size-- > 0)
		*pbTo++ = *pbFrom++;

	return (pvTo);
}

void swap(void *x, void *y, size_t size){
    void *tmp =malloc(size);

    memcpy(tmp,x, size); memcpy(x,y, size); memcpy(y,tmp,size);

    free(tmp);
}

void copy(void *x, void *y, size_t size){
	memcpy (x, y, size);
}