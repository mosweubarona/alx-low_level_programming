#include <unistd.h>

/**
 * _putchar - writes to c
 * @c : the charector
 * Return: on succcess 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
