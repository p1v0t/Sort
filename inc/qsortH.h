#ifndef QUICK_H
#define QUICK_H

#include <stddef.h>
#include "utils.h"

#ifdef __cplusplus
extern "C"{
#endif
	size_t partition (void *, size_t, size_t, size_t, int (*)(const void *,const void *) );
	void qsortH(void *, size_t, size_t, size_t, int (*)(const void *,const void *) );

#ifdef __cplusplus
}
#endif
#endif