#include "main.h"
#include <stdio.h>

/**
 * main - print program name
 * @argc: the arguments
 * @argv: array of arguments
 * Return: always 0 success
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
