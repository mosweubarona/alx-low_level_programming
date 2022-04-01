#include <stdio>

/*
 * main - print number of argumments
 * @argc: int
 * @argv: the list
 * Return: alwasy 0 success
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
