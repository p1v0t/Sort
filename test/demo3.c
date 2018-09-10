#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <time.h>
#include <math.h>

#include "utils.h"

#include "bogo.h"
#include "bubble.h"
#include "gnome.h"
#include "cocktail.h"
#include "selection.h"
#include "insertion.h"
#include "shell.h"
#include "mergeSort.h" //mergeSort //!!
#include "qsort3way.h"  // qsort3way // !!
#include "qsortH.h" // quickSort  //OK
#include "qsortL.h" // quickSortL  // OK
#include "heapSort.h" // OK


#define randomize() srand( (unsigned) time(NULL));

static int cmpInt(const void *a, const void *b){
	if( *(int*) a < *(int*) b)
		return 1;
	else if( *(int*) a == *(int*) b)
		return 0;
	else 
		return -1;
}

static int cmpDouble(const void *a, const void *b){
	if( *(double*) a < *(double*) b)
		return 1;
	else if( *(double*) a == *(double*) b)
		return 0;
	else 
		return -1;
}

static int cmpFloat(const void *a, const void *b){
	if( *(float*) a < *(float*) b)
		return 1;
	else if( *(float*) a == *(float*) b)
		return 0;
	else 
		return -1;
}

static int cmpChar(const void *a, const void *b){
	if( *(char*) a < *(char*) b)
		return 1;
	else if( *(char*) a == *(char*) b)
		return 0;
	else 
		return -1;
}

/*
#include "bogo.h"
#include "bubble.h"
#include "gnome.h"
#include "cocktail.h"
#include "selection.h"
#include "insertion.h"
#include "shell.h"
#include "mergeSort.h" //mergeSort //!!
#include "quick3way.h"  // qsort3way // !!
#include "quick.h" // quickSort  //OK
#include "quickL.h" // quickSortL  // OK
#include "heapSort.h" // OK
*/
void print(int a[], const int SIZE) {
	for(size_t i = 0; i < SIZE; i++)
		printf("%d ",  a[i]);

	printf("\n");
}

int main(void){
	const int nelem  = 10;
	int a[] = {4,1, 3,9, 12, 11, 13, 8, 0, 110 };
	int *b = malloc(sizeof(int) * nelem);

	copy(b, a, nelem );
		
	//bubbleSort_naive(a, SIZE,  sizeof(int); cmpInt);
      	print(b, nelem);
	
		
	return 0;	
}

