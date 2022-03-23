#include <unistd.h>

/**
 * _putchar - write to stout
 * @c: the character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
