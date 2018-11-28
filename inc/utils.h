#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t byte;

#ifdef __cplusplus
extern "C" {
#endif


#ifndef true
#define true 1
#endif

#ifndef false
#define false !(true)
#endif

extern void swap(byte *, byte *, size_t);

extern void copy(void *, void *, size_t);

#ifdef __cplusplus
}
#endif
#endif
