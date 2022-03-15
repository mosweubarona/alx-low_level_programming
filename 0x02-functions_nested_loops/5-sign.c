#include "main.h"

/**
 * print_sign - print sign of number
 * @n: the number to check
 * Return: 1 , 0 or -1 compared to zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
