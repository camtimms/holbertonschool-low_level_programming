#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints the alphabet (lowercase only)
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ch = 'a';

		while (ch != 'z' + 1)
		{
			_putchar(ch);
			ch = ch + 1;
		}
		_putchar('\n');
}
