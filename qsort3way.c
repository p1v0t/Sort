#include "qsort3way.h"
#include "utils.h"

#include <stdlib.h>

void qsort3way(void *base, size_t n, size_t size, int (*cmp)(const void *, const void *))
{
    byte *ptr = (byte*)base;

    while (n > 1) {
        int i = 1, lt = 0, gt = n;
        while (i < gt) {
            int c = cmp(ptr + lt * size, ptr + i * size);
            if (c > 0) {
                swap(ptr + lt * size, ptr + i * size, size);
                lt++;
                i++;
            } else if (c < 0) {
                gt--;
                swap(ptr + i * size, ptr + gt * size, size);
            } else {
                i++;
            }
        }

        if (lt < n - gt) {
            qsort3way(ptr, lt, size, cmp);
            ptr += gt * size;
            n -= gt;
        } else {
            qsort3way(ptr + gt * size, n - gt, size, cmp);
            n = lt;
        }
    }
}
