#ifndef GNOME_H
#define GNOME_H
#include <stddef.h>

#ifdef __cplusplus
extern "C"{
#endif

	void gnomeSort(void *, size_t, size_t, int (*)(const void *, const void *) );

#ifdef __cplusplus
}
#endif
#endif