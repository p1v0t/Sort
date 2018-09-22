#include "bubble.h"

void bubbleSort_naive(void *base,
                      size_t num,
                      size_t size,
                      int (*cmp)(const void *, const void *))
{
  byte *pbBase = (byte *)base;   // pbBase: pointer to byte base
  size_t i, j;

  num -= 1;

  if(num)
    for(i = 0; i < num; i++)
      for(j = 0; j < num - i; j++)
        if(cmp(pbBase + (j + 1) * size, pbBase + j * size) > 0)
          swap(pbBase + (j + 1) * size, pbBase + j * size, size);
}

void bubbleSort(void *base,
                size_t num,
                size_t size,
                int (*cmp)(const void *, const void *))
{
  byte *pbBase = (byte *)base;
  int sorted = true;
  size_t i, j;

  num -= 1;

  if(num) {
    for(i = 0; i < num; i++) {
      sorted = true;
      for(j = 0; j < num - i; j++) {
        if(cmp(pbBase + (j + 1) * size, pbBase + j * size) > 0) {
          swap(pbBase + (j + 1) * size, pbBase + j * size, size);
          sorted = false;
        }
      }
      if(sorted) break;
    }
  }
}
