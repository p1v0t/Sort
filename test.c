#include "insertion.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#define TYPE int

static int compare(const void *a, const void *b) {
  const TYPE da = *((const TYPE *) a);
  const TYPE db = *((const TYPE *) b);
  return (da < db) ? 1 : (da == db) ? 0 : -1;
}


int main2(void){

	const int size =1000;
	
	int *a= (int*)calloc(size, sizeof(int));
	int i;
	
	for( i= 0; i< size; i++)
		a[i]=rand();
		
	insertionSort(a, size, sizeof(int), compare);
	
	for( i= 0; i< size; i++)
		printf("%d\n",a[i] );
	

	free(a);
	return 0;	
}
