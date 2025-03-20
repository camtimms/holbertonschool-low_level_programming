#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers fed into it
 *
 * @separator: Separator to be used between numbers
 * @n: Number of ints passed into the function
 *
 * Description: Prints the numbers given to the function formatted with a
 * separator
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int num = 0;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i != n - 1)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
