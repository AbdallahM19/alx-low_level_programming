#ifndef SEARCH_ALGORITHMS
#define SEARCH_ALGORITHMS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
size_t minimum(size_t x1, size_t x2);

#endif /* SEARCH_ALGORITHMS */
