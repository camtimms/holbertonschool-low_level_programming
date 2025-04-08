#include "main.h"
#include <stdlib.h>

/**
 * print_binary - Prints the binary of an int
 *
 * @n: Integer
 *
 * Description: Uses bit opererations to run through the int n uusing the AND
 * operator to check the least significant bit (LSB) and print it once it
 * reaches the start of the number.
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1;
	int printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i >= 0)
	{
		/* and check */
		if ((n >> i) & 1)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed == 1)
			_putchar('0');
		i--;
	}
}
