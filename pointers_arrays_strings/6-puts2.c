#include "main.h"

/**
 * _puts2 - Prints every second character of a string
 *
 * @str: String
 * Description: Prints a string by incrementing a pointer by 2
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
