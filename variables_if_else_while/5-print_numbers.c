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
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
