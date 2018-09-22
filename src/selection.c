#include "selection.h"

void selectionSort(void *base,
                   size_t num,
                   size_t size,
                   int (*cmp)(const void *, const void *))
{
  byte *pvBase = (byte *)base;
  size_t i, j;
  size_t m;

  if(num) {
    for(i = 0; i < num; i++) {
      m = i;

      for(j = i + 1; j < num; j++)
        if(cmp(pvBase + j * size, pvBase + m * size) > 0) m = j;

      swap(pvBase + i * size, pvBase + m * size, size);
    }
  }
}
