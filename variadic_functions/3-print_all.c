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
	int (*print_func)(va_list);
	int i = 0, j = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (pfs[j].c != '\0')
		{
			if (format[i] == pfs[j].c)
			{
				print_func = get_print_func_fp[i].f;
				print_func(args);
			}
			j++;
		}
	i++;

	va_end(args);
	}
}
