#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/*Headers*/
#include <stddef.h>
#include <stdio.h>

/*Function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int print_array(int *array, int low, int high);

#endif
