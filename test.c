#include "insertion.h"
#include "qsortL.h"
#include "shell.h"
#include "bubble.h"  

#include "utils.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <time.h>

#define randomize() srand( (unsigned) time(NULL));

static int compareInt(const void *a, const void *b) {
  const int da = *((const int *) a);
  const int db = *((const int *) b);
  return (da < db) ? 1 : (da == db) ? 0 : -1;
}

static const int compareDouble(const void *a, const void *b) {
  const double da = *((const double *) a);
  const double db = *((const double *) b);
  return (da < db) ? 1 : (da == db) ? 0 : -1;
}

 int *randArrayInt(const size_t nelem) {
	int *intArray = (int*)calloc(nelem, sizeof(int));
	
	srand(time(NULL));

	for(size_t i = 0; i < nelem; i++)
		intArray[i] = rand();
	
	return intArray;
}

const double *randArrayDouble(const size_t nelem) {
	double *doubleArray = (double*)calloc(nelem, sizeof(double));
	
	for(size_t i = 0; i < nelem; i++)
		doubleArray[i] = rand();
	
	return doubleArray;
}

/*
struct generateRandArray {
	const int *(*generateRandInt)(const size_t) = &randArrayInt; 
	const double *(*generateRandDouble)(const size_t) = &randArrayDouble;
}; 
*/


int main(void){
	time_t start, end;
	double diff;
	srand(time(NULL));

//	struct generateRandArray *generator = malloc(sizeof(struct generateRandArray )); 

	size_t nelem = 10000000000;
	int *a = randArrayInt(nelem);	
	int *b = randArrayInt(nelem);
	int *c = randArrayInt(nelem);
	int *d = randArrayInt(nelem);
	int *e = randArrayInt(nelem);

	time(&start);
	//insertionSort(a, nelem, sizeof(int), compare);
	qsortL(a, 0, nelem -1, sizeof(int), compareInt);
	time(&end);
	
	diff = difftime(end, start);
	
	printf("qsortL ---------------------------------%21f seconds\n", diff);

	time(&start);
	insertionSort(b, nelem, sizeof(int), compareInt);
	time(&end);
	
	diff = difftime(end, start);
	
	printf("insertionSort  -------------------------%21f seconds\n", diff);

	time(&start);
	shellSort(c, nelem, sizeof(int), compareInt);
	time(&end);
	
	diff = difftime(end, start);
	
	printf("shellSort  -----------------------------%21f seconds\n", diff);

	time(&start);
	qsort(a, nelem, sizeof(int), compareInt);
	time(&end);
	
	diff = difftime(end, start);
	
	printf("bubbleSort_naive -----------------------%21f seconds\n", diff);

	time(&start);
	bubbleSort(e, nelem, sizeof(int), compareInt);
	time(&end);
	
	diff = difftime(end, start);
	
	printf("bubbleSort   ---------------------------%21f seconds\n", diff);

	free(a);
	free(b);
	free(c);
	free(d);
	free(e);

	return 0;	
}
