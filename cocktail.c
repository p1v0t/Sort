#include "cocktail.h"
#include "utils.h"

void cocktailShakerSort(void *base, size_t num , size_t size, int (*cmp)(const void *, const void*) ){
	byte *pbBase =(byte*)base;
	size_t i;
	int swapped;

	if(num){
		do{
			swapped =false;
			for(i =0; i< num -2; i++)
				if(cmp(pbBase +(i+1) *size, pbBase +i *size) >0){	
					swap(pbBase +(i+1) *size, pbBase +i *size, size);	
					swapped =true;
				}
				
			if (!swapped)
				break;
			
			swapped = false;
			for(i = num-2; i >0; i--)
				if(cmp(pbBase +(i+1) *size, pbBase +i *size ) >0){
					swap(pbBase +(i+1) *size, pbBase +i *size, size);	
					swapped =true;
				}
		}while(swapped);
	}
}
