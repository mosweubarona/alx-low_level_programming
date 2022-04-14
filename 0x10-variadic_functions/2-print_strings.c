#include "variadic_functions.h"

/**
 * print_strings - print all strings
 * @separator: separate a string
 * @n: undifined args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}


	va_end(list);

	putchar('\n');
}
