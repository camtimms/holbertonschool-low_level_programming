#include "main.h"

/**
 * print_numbers - Prints the numbers 0 through 9
 *
 * Description: Prints the numbers 0 through 9
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
