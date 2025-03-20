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

}

void ((get_print_func_fp)(char *s))(char *s)
{
	print_funct pfs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	}

	int i = 0;

	while (pfs[i] != NULL)
	{
		if (*s == *pfs[i].pf)
			return (pfs[i].f);
		i++;
	}

}
