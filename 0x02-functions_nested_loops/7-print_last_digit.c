#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: number to check
 * Return: last digit
 */
int print_last_digit(int n)
{
	int z;

	if (n < 0)
		n = -n;

	z = n % 10;

	if (z < 0)
		z = -z;
	_putchar(z + '0');

	return (z);
}
