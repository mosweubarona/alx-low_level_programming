#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find lenth of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer adress
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *a;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	a = malloc((size1 + size2) * sizeof(char) + 1);
	if (a == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			a[i] = s1[i];
		else
			a[i] = s2[i - size1];
	}
	a[i] = '\0';
	return (a);
}
