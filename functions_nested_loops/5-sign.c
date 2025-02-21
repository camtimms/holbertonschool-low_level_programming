#include "main.h"

/**
 * print_sign - tells you the sign of a number
 * @n: a number
 * Description: tells you the sign of a number
 * Return: 1 = Positve number, 0 = is zero, -1 = negative number,
 * 404 = Error: Not a signed number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('\n');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar('\n');
		return (-1);
	}
	else
		return (404);
}
