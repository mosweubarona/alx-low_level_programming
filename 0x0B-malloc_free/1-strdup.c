#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns pointer to new string which is a duplicate
 * @str: string
 * Return: the string
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *a;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	/* add 1to size*/
	a = malloc(size * sizeof(*str) + 1);

	if (a == 0)
		return (NULL);

	for (; i < size; i++)
		a[i] = str[i];

	return (a);
}
