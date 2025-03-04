#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to upper case ones.
 *
 * @s: String
 *
 * Description:
 * Return: Pointer
 */

char *string_toupper(char *s)
{
	int n = 0; /* Pointer */

	while (s[n] != '\0')
	{
		if (s[n] >= 'a' && s[n] <= 'z')
			s[n] = 'A' + (s[n] - 'a');
	n++;
	}
	return (s);
}
