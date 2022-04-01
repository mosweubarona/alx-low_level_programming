#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - check if number prime
 * @n: number to check
 * Return: 1 if if it is, else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - if prime recursively
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime else 0.
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
