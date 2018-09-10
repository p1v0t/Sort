#include "bogo.h"
#include "utils.h"

#include <stdlib.h> //for rand(), dont forget to randomize

void suffle(void *base, size_t  num, size_t size ){
	byte *ptr = (byte*)base;
	byte *t =(byte*)malloc(sizeof(byte));
	size_t i, r;
	
	for(i =0; i <num; i++){
		copy(t, ptr +i *size, size);
		r = rand() %num;
		copy (ptr +i* size, ptr +r*size, size);
		copy (ptr +r *size, t, size);	
	}

	free(t);
}

int sorted(void *base, size_t  num, size_t size, int (*cmp)(const void *,const void *) ){
	byte *ptr = (byte*)base;

	num -=1;

	while(num){
		if(cmp (ptr +(num -1) *size, ptr +(num) *size) <0)
			return false;
		num--;
	}

	return true;
}


void bogoSort(void *base, size_t  num, size_t size, int (*cmp)(const void *,const void *)){
		for(; !sorted(base,num, size, cmp); suffle(base, num, size));
}
