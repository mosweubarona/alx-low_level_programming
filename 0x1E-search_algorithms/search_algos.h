#ifndef SEARCH_H
#define SEARCH_H

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_binary(int *array, int value, size_t left, size_t right);
void array_print(int *array, size_t left, size_t right);

#endif
