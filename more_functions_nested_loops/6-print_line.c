#include "main.h"

/**
 * print_line - Prints a line
 *
 * @n: Lenth of the line
 * Description: Prints a line to a length the user specifies.
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
