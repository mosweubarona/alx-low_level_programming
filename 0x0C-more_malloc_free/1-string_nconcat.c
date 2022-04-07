#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @s: string
 * Return: interger
 */

unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: bits of s2 to be used
 * Return: to c or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* string length*/
	if (n < _strlen(s2))
		c = malloc(_strlen(s1) + n * sizeof(char + 1));
	else
		c = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (c == 0)
		return (NULL);

	/* unsigned int*/
	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];

	for (j = 0; s2[i] != '\0' && j < n; i++, j++)
		c[i] = s2[j];

	c[i] = '\0';
	return (c);
}
