#include <unistd.h>

/**
 * _putchar - writes the charactor c
 * @c: the charactor
 * Return: on success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
