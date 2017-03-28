#include "qsort3way.h"
#include "utils.h"
#include <stdlib.h>

void qsort3way(void *base, size_t lo, size_t hi, size_t size, int (*cmp)(const void *,const void *) ){

	if (hi <= lo)
		return;
	else{ 
		byte *pbBase = (byte*) base;
		void *pivot = malloc(size);
		size_t lt = lo, gt = hi;
		size_t i = lo;

		if (!pivot)
			return;

		copy(pivot, pbBase +lo *size, size);

		while (i <= gt){
			int c = cmp(pivot, pbBase + i * size);

			if (c < 0)
				swap(pbBase + (lt++) * size, pbBase + (i++) * size, size);
			else if (c > 0)
				swap(pbBase + i * size, pbBase + (gt--) * size, size);
			else
				i++;
		}

		qsort3way(base, lo, lt -1, size, cmp);
		qsort3way(base, gt +1, hi, size, cmp);

		free(pivot);
	}
}
