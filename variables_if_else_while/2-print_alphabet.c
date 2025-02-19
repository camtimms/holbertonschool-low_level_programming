#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Description - prints the alphabet (lowercase only)
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
