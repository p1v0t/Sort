#ifndef UTILS_H
#define UTILS_H
#include <stddef.h>

typedef char byte;

#ifdef __cplusplus
extern "C"{
#endif


#ifndef true
#define true 1
#endif

#ifndef false
#define false 0
#endif

	void swap(void *, void *, size_t);
	void copy(void *, void *, size_t);

#ifdef __cplusplus
}
#endif
#endif
