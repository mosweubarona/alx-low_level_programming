#include "main.h"

/**
 * _strncat - conctenates to other strings
 * @dest: destination
 * @src: source
 * @n: number of byte
 * Return: a point
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
