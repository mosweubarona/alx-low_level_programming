#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 success
 */
int main(void)
{
	printf("char size: %2d byte(s)\n", sizeof(char));
	printf("int size: %i byte(s)\n", sizeof(int));
	printf("long int size: %i byte(s)\n", sizeof(long int));
	printf("long long int size: %i byte(s)\n", sizeof(long long int));
	printf("float size: %i byte(s)\n", sizeof(float));
	return (0);
}
