#ifndef COCKTAIL_H
#define COCKTAIL_H
#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif

	void cocktailShakerSort(void *, size_t, size_t, int (*)(const void *, const void*) );

#ifdef __cplusplus
}
#endif
#endif