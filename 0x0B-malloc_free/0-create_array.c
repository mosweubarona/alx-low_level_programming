#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of char
 * @size: array size
 * @c: char to initialize
 * Return: to pointer of array
 */
char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
		return (0);
	while (size--)
		a[size] = c;
	return (a);
}
