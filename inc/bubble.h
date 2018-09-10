#ifndef BUBBLE_H
#define BUBBLE_H
#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif

	void bubbleSort_naive(void *, size_t, size_t, int (*)(const void *, const void*) );

	void bubbleSort(void *, size_t, size_t, int (*)(const void *, const void*) );

#ifdef __cplusplus
}
#endif
#endif