#include "insertion.h"

void insertionSort(void *base,
                   size_t num,
                   size_t size,
                   int (*cmp)(const void *, const void *))
{
  byte *pbBase = (byte *)base;
  size_t i, j;

  if(num)
    for(i = 1; i < num; i++)
      for(j = i; j > 0 && cmp(pbBase + j * size, pbBase + (j - 1) * size) > 0;
          j--)
        swap(pbBase + j * size, pbBase + (j - 1) * size, size);
}
