#include "main.h"

/**
 * print_triangle - Prints a triangle set by size
 *
 * @size: Sets the size of the triangle
 * Description: Uses # to print a triangle
 * Return: void
 */
void print_triangle(int size)
{
	int h = 0;
	int n;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (h < size)
		{
			for (n = 0; n < size - h - 1; n++)
			{
				_putchar(' ');
			}

			for (i = 0; i < h + 1; i++)
			{
				_putchar('#');
			}

			_putchar('\n');
			h++;
		}
	}
}
