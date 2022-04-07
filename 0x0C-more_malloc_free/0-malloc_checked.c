#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory
 * @b: unsg int
 * Return: 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
