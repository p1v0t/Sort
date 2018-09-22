#ifndef MERGESORT_H
#define MERGESORT_H

#include <stddef.h>
#include "utils.h"

#ifdef __cplusplus
extern "C" {
#endif

void merge(void *, size_t, size_t, size_t, int (*)(const void *, const void *));
void mergeSort(void *,
               size_t,
               size_t,
               size_t,
               int (*)(const void *, const void *));

#ifdef __cplusplus
}
#endif
#endif