#include "main.h"

/**
 * _isdigit - Checks if a character is a number
 *
 * @c: A character
 * Description: Checks if a character is a number
 * Return: 1 - is a digit, 0 - otherwise
 */
int _isdigit(int c)
{
	if (48 <= c && 57 >= c)
		return (1);
	else
		return (0);
}
