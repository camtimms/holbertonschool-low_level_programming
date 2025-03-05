#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: String
 * @c: Character
 *
 * Description: Locates character (c) in string (s)
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] = c)
			return(&s[i]);
	}
	return(NULL);
}
