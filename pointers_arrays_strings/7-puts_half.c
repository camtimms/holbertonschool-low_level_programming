#include "main.h"

/**
 * puts_half - Prints half the string
 *
 * @str: A string
 * Description: Prints half of a string
 * Return: void
 */

void puts_half(char *str)
{
	int n = 0;
	int max_length;

	while (str[n] != '\0')
		n++;

	/* Remove null char */
	n = n - 1;
	max_length = n;

	/* Find midpoint */
	n = (max_length + 1) / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}

