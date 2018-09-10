#include "heapSort.h"
#include "utils.h"

void heapSort(void *base, size_t num, size_t size, int (*cmp)(const void *, const void *))
{
	byte *pbBase = (byte *) base;
	int  i =(num/2 - 1)*size;
	int n =num*size;
	int c, r;

	while(i >=0){
		for (r =i; r*2 +size <n; r =c) {
			c =r*2 +size;
			if (c < n -size && cmp(pbBase +c, pbBase +c +size) >= 0)
				c +=size;
			if (cmp (pbBase +r, pbBase +c) <0)
				break;
			swap(pbBase +r, pbBase +c, size);
		}
		i -=size;
	}

	for (i =n -size; i > 0; i -=size) {
		swap(pbBase, pbBase +i, size);

		for (r =0; r*2 +size < i; r =c) {
			c =r*2 +size;
			if (c < i -size && cmp(pbBase +c, pbBase +c +size) >= 0)
				c +=size;
			if (cmp(pbBase +r, pbBase +c) <0)
				break;
			swap(pbBase +r, pbBase +c, size);
		}
	}
}

