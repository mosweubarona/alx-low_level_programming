#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals
 * @a: matrix we print from
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		sum1 += a[size - i - 1];
		a += size;
	}
	printf("%d, %d\n", sum, sum1);
}
