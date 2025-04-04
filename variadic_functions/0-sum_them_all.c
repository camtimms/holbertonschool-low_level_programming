#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum all arguments
 *
 * @n: Number of arguments
 *
 * Description: Uses variadic functoins to sum intergers
 *
 * Return: Sum of values (int), no ints passed (0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(num, n);

	while (i < n)
	{
		total = total + va_arg(num, int);
		i++;
	}

	va_end(num);
	return (total);
}
