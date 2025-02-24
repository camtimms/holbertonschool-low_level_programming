#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14 ten times
 *
 * Description: Prints the numbers 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int n = 0;

	for (; n <= 10; n++)
	{
		i = 0;
		for (; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
	_putchar('\n');
	}
}
