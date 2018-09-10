#ifndef HEAPSORT_H
#define HEAPSORT_H
#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif

	void heapSort(void *, size_t, size_t, int (*)(const void *, const void *) );

#ifdef __cplusplus
}
#endif
#endif