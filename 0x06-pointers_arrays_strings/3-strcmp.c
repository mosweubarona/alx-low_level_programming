#include "main.h"

/**
 * _strcmp - compare 2 string
 * @s1: first
 * @s2: second
 * Return: which one is big or small
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
