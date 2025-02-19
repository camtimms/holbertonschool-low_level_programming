#include <stdio.h>

/**
 * main - prints the base 16 digits
 *
 * Description: prints the base 16 digits
 * Return: Always 0
 */
int main(void)
{
	/* Declare char variable */
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
