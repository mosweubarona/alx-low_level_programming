#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of inteeegrs
 * @min: minimun
 * @max: maximum
 * Return: NULL if malloc falls else value
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(a) * ((max - min) + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;
	free(a);
	return (a);
}
