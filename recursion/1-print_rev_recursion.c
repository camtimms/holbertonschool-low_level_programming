#include "main.h"

/**
 * _print_rev_recursion - Prints a string using recurison in reverse
 *
 * @s: Pointer to a string
 *
 * Description: Prints a string using recursion in reverse
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
