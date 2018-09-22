#include "mergeSort.h"
#include <stdlib.h>

void merge(void *base,
           size_t lo,
           size_t hi,
           size_t size,
           int (*cmp)(const void *, const void *))
{
  byte *pbBase = (byte *)base;   // to be able to offset void *
  void *aux = malloc(sizeof(1) * hi + 1 - lo);
  byte *auxp = (byte *)aux;

  size_t i, j, mid, k;

  i = lo;
  mid = lo + (hi - lo) / 2;
  j = mid + 1;

  for(k = lo; k <= hi; k++)
    copy(auxp + k * size, pbBase + k * size, size);

  for(k = lo; k <= hi; k++)

    if(i > mid)
      copy(pbBase + k * size, auxp + (j++) * size, size);

    else if(j > hi)
      copy(pbBase + k * size, auxp + (i++) * size, size);

    else if(cmp(auxp + j * size, auxp + i * size))
      copy(pbBase + k * size, auxp + (j++) * size, size);

    else
      copy(pbBase + k * size, auxp + (i++) * size, size);

  free(aux);
}

void mergeSort(void *base,
               size_t lo,
               size_t hi,
               size_t size,
               int (*cmp)(const void *, const void *))
{
  if(hi <= lo)
    return;
  else {
    size_t mid = lo + (hi - lo) / 2;
    mergeSort(base, lo, mid, size, cmp);
    mergeSort(base, mid + 1, hi, size, cmp);
    merge(base, lo, hi, size, cmp);
  }
}