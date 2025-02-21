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
		return (1);
		_putchar('\n');
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
	else
		return (404);
}
