#include "main.h"

/**
 * _isupper - checks if the charater is an uppercase letter
 * @c : Character
 * Description: Checks if the character is an uppercase letter
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (65 <= c && 90 >= c)
		return (1);
	else
		return (0);
}
