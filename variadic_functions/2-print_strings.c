#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints a string
 *
 * @separator: Separator to be used between strings
 * @n: Number of string
 *
 * Descriptions: Takes multiple strings as arguments and prints them with a
 * specified separator
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "";

		printf("%s", str);

		if (i != n - 1)
			printf("%s", separator);
		i++;
	}

	va_end(args);
	printf("\n");
}
