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
