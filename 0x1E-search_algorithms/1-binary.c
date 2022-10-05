#include "search_algos.h"

/**
 * binary_search - binary search algo
 * @array:  pointer to the first element of the array to search
 * @size:  number of elements in array
 * @value: the value to search for
 * Return: int, the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
size_t i;
int A = 0;
int C = size;
int B;
if (array == NULL)
	return (-1);
/* A=left, B=midle, C=right */
for (i = 0; A < C; i++)
{
	printf("Searching in array: ");
	print_array(array, A, C);
	B = (A + C) / 2;

	if (array[B] < value)
		A = B + 1;
	else if (array[B] > value)
		C = B;
	else
		return (B);
}
return (-1);
}


/**
 * print_array - print n elements of an array
 * @x: int array pointer to print
 * @y: int, start index
 * @z: int, end index
 * Description: Numbers must be separated by comma
 */

void print_array(int *x, int y, int z)
{

	for (; y < z; y++)
	{
		printf("%d", x[y]);
		if (y < z - 1)
			printf(", ");
	}
	printf("\n");
}
