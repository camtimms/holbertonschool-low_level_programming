#include "main.h"

/**
 * print_square - Prints a square set by size
 *
 * @size: Sets the size of the square
 * Description: Uses # to print a square
 * Return: void
 */
void print_square(int size)
{
	int b;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (h < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			h++;
		}
	}
}
