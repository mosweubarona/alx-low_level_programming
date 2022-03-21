#include "main.h"

/**
 * _strlen - return lenth
 * @s: string to checke
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
