#include "main.h"
#include <stdio.h>

/**
 * main - chek the code
 * Return: nothing
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitaliza on what comes.\n";

	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
