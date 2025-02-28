#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: String
 * Description: Prints a string by incrementing a pointer
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
