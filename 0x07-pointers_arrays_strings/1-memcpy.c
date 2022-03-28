#include "main.h"

/**
 * *_memcpy - copies memory
 * @dest: destination area
 * @src: memory to copt from
 * @n: number of bytes
 * Return: ponter to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
