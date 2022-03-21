#include <unistd.h>


/**
 * _putchar - write to c stdout
 * @c: the charector to print
 * Return: on success 1.
 * On error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
