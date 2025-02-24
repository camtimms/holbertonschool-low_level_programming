#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 *
 * @n: Length of the line
 * Description: Prints a diagonal line to the users specified length
 * Return: void
 */
void print_diagonal(int n)
{
	int c, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < i; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
