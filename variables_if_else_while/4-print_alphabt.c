#include <stdio.h>
/**
 * main - prints the alphabet except for q and e
 *
 * Description - prints the alphabet (lowercase only) except for q and e
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch == 'e' || ch == 'q')
			;
		else
		putchar(ch);
	putchar('\n');
	return (0);
}
