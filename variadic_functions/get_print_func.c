#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * get_print_func_fp - Function pointer to the right print function
 *
 * @c: Character from format to compare
 *
 * Description: Function pointer to the right print function
 *
 * Return: print function
 */

int (*get_print_func_fp(char c))(va_list)
{
	int i = 0;

	while (pfs[i].c != '\0')
	{
		if (c == *pfs[i].c)
			return (pfs[i].f);
		i++;
	}
	return (pfs[i].f);
}

/**
 * print_char - Prints a character
 *
 * @args: Variadic argument
 *
 * Description: Prints a character
 *
 * Return: void
 */

void print_char(va_list args);
{
	char c = va_arg(args, int);

	_putchar(c);
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
