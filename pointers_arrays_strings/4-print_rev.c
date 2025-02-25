#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: A string
 * Description: Prints a string in reverse by locating the last memory position
 * and prints it backwards
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	/* Find location in memory */
	while (s[n])
	{
		n++;
	}
	/* n should be the lenth of the str */
	while (n != 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
