#include "bubble.h"
#include "cocktail.h"
#include "comb.h"
#include "gnome.h"
#include "heapSort.h"
#include "insertion.h"
#include "shell.h"
#include "qsort3way.h"
#include "selection.h"

#include <stdbool.h>

#include <stdio.h>
#include <stdlib.h>

#define TYPE double

static int cmp_func(const void *i, const void *j) {
	if (*(const TYPE *)i < *(const TYPE *)j) return -1;
	if (*(const TYPE *)i > *(const TYPE *)j)
		return +1;
	else
		return 0;
}

#define ARRAYSIZE 100

double d[ARRAYSIZE];

#define RANDOMIZE()                            \
	for (size_t i = 0; i < ARRAYSIZE; i++) \
		d[i] = rand() / ((double)RAND_MAX + 1);

static bool isSorted(TYPE array[], const size_t arraySize) {
	for (size_t i = 0; i < arraySize - 1; i++)
		if (d[i] < d[i + 1]) return false;
	return true;
}

int main(void) {
	RANDOMIZE();

	printf(
	    "Started testing correctness of Bubble Sort "
	    "implementation\n");
	bubbleSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Bubble Sort "
	    "implementation\n\n");

	RANDOMIZE();

	printf(
	    "Started testing correctness of naive Bubble Sort "
	    "implementation\n");
	bubbleSort_naive(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of naive Bubble Sort "
	    "implementation\n\n");

	RANDOMIZE();

	printf(
	    "Started testing correctness of Cocktail-Shaker Sort "
	    "implementation\n");
	cocktailShakerSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Cocktail-ShakerSort "
	    "implementation\n\n");

	RANDOMIZE();

	printf(
	    "Started testing correctness of Comb Sort "
	    "implementation\n");
	cocktailShakerSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Comb Sort "
	    "implementation\n\n");

	RANDOMIZE();

	printf(
	    "Started testing correctness of Gnome Sort "
	    "implementation\n");
	gnomeSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Gnome Sort "
	    "implementation\n\n");

	RANDOMIZE();

	printf(
	    "Started testing correctness of Heap Sort "
	    "implementation\n");
	heapSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Heap Sort "
	    "implementation\n\n");

	RANDOMIZE();

	printf(
	    "Started testing correctness of Insertion Sort "
	    "implementation\n");
	insertionSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Insertion Sort "
	    "implementation\n\n");

	RANDOMIZE();

	printf(
	    "Started testing correctness of Shell Sort "
	    "implementation\n");
	shellSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Shell Sort "
	    "implementation\n\n");

	
	RANDOMIZE();

	printf(
	    "Started testing correctness of Selection Sort "
	    "implementation\n");
	selectionSort(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of Selection Sort "
	    "implementation\n\n");


	RANDOMIZE();

	printf(
	    "Started testing correctness of 3 Way Quick Sort "
	    "implementation\n");
	qsort3way(d, ARRAYSIZE, sizeof(*d), cmp_func);

	if (!isSorted(d, ARRAYSIZE)) {
		printf(
		    "Something is wrong with the "
		    "implementation\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	} else {
		printf("Implementation is correct\n");
		printf("Some output: ");
		for (size_t i = 0; i < 5; i++) printf("%lf ", d[i]);
	}

	printf(
	    "\nFinished testing correctness of 3 Way Quick Sort "
	    "implementation\n\n");


	return 0;
}