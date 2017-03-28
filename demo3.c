#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <time.h>
#include <math.h>

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

static double tictoc(clock_t tic, clock_t toc){
	return (double)(toc -tic)/CLOCKS_PER_SEC;
}


void doWork(void){
	//const long int length[] = {1000, 10000, 100000, 1000000, 10000000, 100000000};
	const int size =320;
	int i ,j;
	clock_t tic, toc;
	double result; 

	int **basicSorts;

	for(i = 0; i < 5; i++){
		basicSorts = (int**)calloc(i, sizeof(int*));
		for (j = 0; j < size; j++)
			basicSorts[i] = (int *)calloc(size, sizeof(int));
	}

	randomize();

	for(i=0; i< size; i++){ //already sorted
		basicSorts[0][size] =
		basicSorts[1][size] =
		basicSorts[2][size] =
		basicSorts[3][size] =
		basicSorts[4][size] =
		basicSorts[5][size] = rand();
	}

	//tic =clock(); bubbleSort_naive(&basicSorts[0][size], size, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//tic =clock(); bubbleSort(&basicSorts[1][size], size, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//tic =clock(); cocktailShakerSort(&basicSorts[2][size], size, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//tic =clock(); selectionSort(&basicSorts[3][size], size, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//tic =clock(); insertionSort(&basicSorts[4][size], size, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//tic =clock(); shellSort(&basicSorts[4][size], size, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//	tic =clock(); quickSort(&basicSorts[3][size],0 , size-1, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//	tic =clock(); quickSortL(&basicSorts[4][size], 0, size-1, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	//tic =clock(); heapSort(&basicSorts[4][size], size, sizeof(int), cmpInt); toc =clock(); 
	//result = tictoc(tic, toc);
	//printf("%.10lf\n", result);

	tic =clock(); gnomeSort(&basicSorts[4][size], size, sizeof(int), cmpInt); toc =clock(); 
	result = tictoc(tic, toc);
	printf("%.10lf\n", result);






	for(i = 0; i < 5; i++){
		for (j = 0; j < size; j++)
			free(&basicSorts[i][j]);
		free(basicSorts[i]);
	}

		
	/*bubbleSort(&basicSorts[0][size], 1000, sizeof(int), cmpInt);
	cocktailShakerSort(&basicSorts[1][size], 1000, sizeof(int), cmpInt);
	selectionSort(&basicSorts[2][size], 1000, sizeof(int), cmpInt);
	insertionSort(&basicSorts[3][size], 1000, sizeof(int), cmpInt);
	shellSort(&basicSorts[4][size], 1000, sizeof(int), cmpInt);*/
}


int main(void){

	doWork();

	return 0;	
}

