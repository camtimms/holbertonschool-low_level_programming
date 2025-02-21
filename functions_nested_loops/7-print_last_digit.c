#include "main.h"
/**
 * print_last_digit - returns the last digit
 *
 * @n: input number
 *
 * Description: returns the last digit
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
