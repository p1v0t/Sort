#include "qsortL.h"

size_t LomutoPartition (void *base, size_t lo, size_t hi, size_t size, int (*cmp)(const void *,const void *) ){
	char *ptr = (char*)base;
	char *p =ptr +hi *size;

	int i =lo -1;
	size_t j;

	for(j =lo; j <hi; j++)
		if(cmp(ptr +j *size, p) >0)
			swap(ptr +(++i) *size, ptr +j *size, size);

	swap(ptr +(i +1) *size, ptr +j *size, size);

	return i +1;
}

void qsortL(void *base, size_t lo, size_t hi, size_t size, int (*cmp)(const void *,const void *) ){
	size_t p;
	
	if(hi <=lo) 
		return;
	else {
		p = LomutoPartition(base, lo, hi, size, cmp);
		qsortL(base, lo, p -1, size, cmp);
        qsortL(base,(p +1),hi, size, cmp);
	}
} 

