#ifndef QSORT3WAY_H
#define QSORT3WAY_H

#include <stddef.h>
#include "utils.h"

#ifdef __cplusplus
extern "C" {
#endif

void qsort3way(void *, size_t, size_t, int (*)(const void *, const void *));

#ifdef __cplusplus
}
#endif
#endif
