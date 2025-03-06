#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes
 *
 * @s: String
 * @accept: Accepted bytes
 *
 * Description: This function compares the string accept and finds the first
 * occourance of one of the characters in s
 *
 * Return: pointer s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return(&s[i]);
			j++;
		}
	i++;
	}
	return ('\0');
}
