#include "bubble.h"

#include <stdio.h>
#include <stdlib.h>

static int cmp_double(const void *i, const void *j) {
    if (*(const double *)i < *(const double *)j)
        return -1;
    if (*(const double *)i > *(const double *)j)
        return +1;
    else
        return 0;
}

int main(void) {
    double d[100];
    int i;

    for (i = 0; i < 100; i++)
        d[i] = rand() / ((double)RAND_MAX + 1);

    bubbleSort(d, 100, sizeof(*d), cmp_double);

    for (i = 0; i < 100; i++)
        printf("%.10lf\n", d[i]);

    return 0;
}
 