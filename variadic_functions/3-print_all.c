#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Prints the arguments based on the chars in the format
 *
 * @format: A string/set of chars which specify what data types to print
 *
 * Description: Prints the arguments based on the chars in the format string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	void (*print_func)(va_list);
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		print_func = get_print_func_fp(format[i]);

		if (print_func)
		{
			print_func(args);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
