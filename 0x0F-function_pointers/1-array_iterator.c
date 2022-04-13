#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a fucntion given as a parameter
 * @array: array to iterate
 * @size: array size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
