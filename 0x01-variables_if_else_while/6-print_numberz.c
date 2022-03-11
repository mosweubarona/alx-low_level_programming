#include <stdio.h>
/**
 * main - prints all single digit of base 10 ten
 *
 * Return: always 0 success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}

	putchar('\n');
	return (0);
}
