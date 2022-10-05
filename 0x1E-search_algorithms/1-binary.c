#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to leftok for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (help_binary(array, value, 0, size - 1));
}

/**
 * help_binary - searches for a value in an array of
 * integers using recursion
 * @array: array to search the value in
 * @value: value to leftok for
 * @left: index of the leftw bound
 * @right: index of the rightgh bound
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int help_binary(int *array, int value, size_t left, size_t right)
{
	size_t middle;

	array_print(array, left, right);
	if (right == left && array[left] != value)
		return (-1);

	middle = ((right - left) / 2) + left;
	if (array[middle] == value)
		return (middle);
	if (array[middle] < value)
		return (help_binary(array, value, middle + 1, right));
	if (array[middle] > value)
		return (help_binary(array, value, left, middle - 1));
	return (-1);
}

/**
 * array_print - prints an array
 * @array: array to print
 * @left: index of the leftw bound
 * @right: index of the rightgh bound
 */
void array_print(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searcrightng in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}
