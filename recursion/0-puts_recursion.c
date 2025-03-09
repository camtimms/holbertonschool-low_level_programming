#include "main.h"

/**
 * _puts_recursion - Prints a string using recurison
 *
 * @s: Pointer to a string
 *
 * Description: Prints a string using recursion
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{	_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
