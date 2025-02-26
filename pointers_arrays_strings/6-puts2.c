#include "main.h"

/**
 * puts2 - Prints every second character of a string
 *
 * @str: String
 * Description: Prints a string by incrementing a pointer by 2
 * Return: void
 */
void puts2(char *str)
{
	int n = 0;
	
	/* Use index based approach to not jump past the null terminatot */
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n = n + 2;
	}
	_putchar('\n');
}
