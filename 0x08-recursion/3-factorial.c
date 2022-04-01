#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number to retur factorial from
 * Return: factoril of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
