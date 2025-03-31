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
	void (*get_print_func_fp)(char *s);
	int i = 0, j = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (pfs[j].pf != '\0')
		{
			if (format[i] == pfs[j].c)
				print_func = get_print_func_fp[i].f(args);
			j++;
		}
	i++;

	va_end(args);
	}
}
