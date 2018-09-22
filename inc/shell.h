#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include "utils.h"

#ifdef __cplusplus
extern "C" {
#endif

void shellSort(void *, size_t, size_t, int (*)(const void *, const void *));

#ifdef __cplusplus
}
#endif
#endif