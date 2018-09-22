#ifndef BOGO_H
#define BOGO_H
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void suffle(void *, size_t, size_t);

int sorted(void *, size_t, size_t, int (*)(const void *, const void *));

void bogoSort(void *, size_t, size_t, int (*)(const void *, const void *));

#ifdef __cplusplus
}
#endif
#endif