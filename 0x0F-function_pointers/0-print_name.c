#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: string
 * @f: the function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
