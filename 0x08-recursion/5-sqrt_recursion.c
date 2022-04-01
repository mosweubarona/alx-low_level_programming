#include "main.h"

int actual_sqrt_recursion(int  n, int i);

/**
 * _sqrt_recursion - returns natural number of square root
 * @n: number to get square root from
 * Return: the square
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - find natural number of square root
 * @n: source of square root
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
