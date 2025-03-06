#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes
 *
 * @s: String
 * @accept: Accepted bytes
 *
 * Description: The strpbrk() function searches for the first occurrence in a
 * string of any of the specified characters and returns a pointer to that
 * position in the string.
 *
 * Return: A char type pointer to the position of the first occurrence of any
 * of the search characters, or NULL if none of the characters were found.
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
