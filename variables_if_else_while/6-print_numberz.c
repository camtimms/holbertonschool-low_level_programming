#include <stdio.h>

/**
 * main - prints the base 10 digits
 *
 * Description: prints the base 10 digits
 * Return: Always 0
 */
int main(void)
{
	/* Declare char variable */
	int n = 0;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}
