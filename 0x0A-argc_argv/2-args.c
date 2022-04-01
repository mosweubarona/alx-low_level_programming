#include <stdio.h>

/**
 * main - print number of argumments
 * @argc: the arguments
 * @argv: the arrays
 * Return: always 0 success
 */
int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
