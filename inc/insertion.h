#ifndef INSERTION_H
#define INSERTION_H
#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif

	void insertionSort(void *, size_t, size_t, int (*)(const void *,const void *) );

#ifdef __cplusplus
}
#endif
#endif