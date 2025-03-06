#include "main.h"

/**
 * _strspn - Finds the length of the string where acceptable characters appear
 *
 * @s: Input String
 * @accept: String of acceptable characters
 *
 * Description: Using a nested while loop to go through both strings, if any
 * letters in accept appear in s then the length is increased by 1.
 *
 * Return: unsigned int, Length of the prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int prefix_length = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				prefix_length++;

			else if (accept[j] == '\0')
				return (prefix_length);

			else
				j++;
		}

		i++;
	}
	return (prefix_length);
}
