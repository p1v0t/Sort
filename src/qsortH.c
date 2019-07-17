#include "qsortH.h"
#include <stdlib.h>

size_t partition(void *base,
                 size_t lo,
                 size_t hi,
                 size_t size,
                 int (*cmp)(const void *, const void *))
{
  byte *pbBase = (byte *)base;
  byte *v = (byte *)base;

  size_t i = lo;
  size_t j = hi + 1;

  while(true) {
    while(cmp(pbBase + (++i) * size, v + lo * size) < 0)
      if(i == hi) break;
    while(cmp(v + lo * size, pbBase + (--j) * size) < 0)
      if(j == lo) break;
    if(i >= j) break;
    swap(pbBase + i * size, pbBase + j * size, size);
  }
  swap(pbBase + lo * size, pbBase + j * size, size);

  return j;
}

void qsortH(void *base,
            size_t lo,
            size_t hi,
            size_t size,
            int (*cmp)(const void *, const void *))
{
  size_t p;

  if(hi <= lo)
    return;
  else {
    p = partition(base, lo, hi, size, cmp);
    qsortH(base, lo, p - 1, size, cmp);
    qsortH(base, (p + 1), hi, size, cmp);
  }
}
