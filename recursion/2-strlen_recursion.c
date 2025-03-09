#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: A string
 *
 * Description: A function that finds the length of a string using recursion.
 *
 * Return: Length of a string (int)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
