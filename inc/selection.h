#ifndef SELECTION_H
#define SELECTION_H
#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif

	void selectionSort(void *, size_t, size_t, int (*)(const void *,const void *) );

#ifdef __cplusplus
}
#endif
#endif
