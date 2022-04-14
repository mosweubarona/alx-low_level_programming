#include "variadic_functions.h"

/**
 * print_int - print string
 * @list: separate srings
 */
void print_int(va_list list)
{

	printf("%d", va_arg(list, int));
}

/**
 * print_float - print flot
 * @list: the arguments
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - int
 * @list: the arguments
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - print str
 * @list: the arguments
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);
}

/**
 * print_all - print any type
 * @format: arg to print
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *sep = "";

	printTypeStruct printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", sep);
				printType[j].printer(list);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
