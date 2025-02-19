#include <stdio.h>
/**
 * main - prints the full alphabet
 *
 * Description - prints the alphabet, lower and upper case.
 * Return: Always 0
 */
int main(void)
{
	char ch;
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		for (ch = 'A'; ch <= 'Z'; ch++)
			putchar(ch);
		putchar('\n');
		return (0);
}
