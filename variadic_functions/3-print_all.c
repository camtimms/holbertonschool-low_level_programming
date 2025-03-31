#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - Prints a character
 *
 * @args: Variadic argument
 *
 * Description: Prints a character
 *
 * Return: void
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
}

/**
 * print_int - Prints an integer
 *
 * @args: Variadic argument
 *
 * Description: Prints an integer
 *
 * Return: void
 */

void print_int(va_list args)
{
	int n = va_arg(args, int);

	printf("%d", n);
}

/**
 * print_float - Prints a float
 *
 * @args: Variadic argument
 *
 * Description: Prints a float
 *
 * Return: void
 */

void print_float(va_list args)
{
	double n = va_arg(args, double);

	printf("%f", n);
}

/**
 * print_str - Prints a string
 *
 * @args: Variadic argument
 *
 * Description: Prints a string
 *
 * Return: void
 */

void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * get_print_func_fp - Function pointer to the right print function
 *
 * @c: Character from format to compare
 *
 * Description: Function pointer to the right print function
 *
 * Return: print function
 */

void (*get_print_func_fp(char c))(va_list)
{
	print_func_t pfs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
		};
	int i = 0;

	while (pfs[i].c != '\0')
	{
		if (c == pfs[i].c)
			return (pfs[i].f);
		i++;
	}
	return (NULL);
}

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
