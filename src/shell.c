#include "shell.h"
#include "utils.h"

void shellSort(void *base, size_t num, size_t size, int (*cmp)(const void *,const void *) ){
	byte *pbBase =(byte*)base;
	size_t i, j;
	size_t h =1;

	if(num){
		while(h <num /3)
			h =3 *h +1;

		while (h >=1){
			for(i =1; i <num; i++)
				for(j =i; j >0 && cmp (pbBase + j*size, pbBase +(j -1)*size) >0; j--)
					swap(pbBase + j*size, pbBase +(j -1)*size, size);
			h /=3;
		}	
	}	

}
