#include "main.h"

/**
 * *_memset - fills with a constant value
 * @s: memory ares to fill
 * @b: char to copy
 * @n: number of times b is copied
 * Return: pointer to s memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
