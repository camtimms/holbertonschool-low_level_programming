#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Description: prints the alphabet (lowercase only)
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		char ch = 'a';

			while (ch != 'z' + 1)
			{
				_putchar(ch);
				ch = ch + 1;
			}
			_putchar('\n');
	}
}
