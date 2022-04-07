#include "main.h"
#include <stdlib.h>


/**
 * _memcpy - copy memory data to dest from src
 * @dest: destination
 * @src: sorce
 * @n: new memory
 */
void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *csrc = (char  *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

/**
 * *_realloc - realloccate memory
 * @ptr: array lenghth
 * @old_size: old memory
 * @new_size: new memory size
 * Return: pointer for new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		newPtr = malloc(new_size);
		if (newPtr)
		{
			_memcpy(newPtr, ptr, old_size);
			free(ptr);
		}
		return (newPtr);
	}
	return (0);
}
