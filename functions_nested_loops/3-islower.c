#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: input character
 *
 * Description: checks if the character is lowercase by using conditional
 * statements
 * Return: 1 = lowercase character, 0 = not lowercase character
 */
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
