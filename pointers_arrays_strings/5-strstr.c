#include "main.h"

/**
 * _strstr - Finds the location of a search string in a source string
 *
 * @haystack:  Source string
 * @needle: Search string
 *
 * Description: Finds the complete search string (needle) in the source string
 * (haystack).
 *
 * Return: Pointer to the first occourance of the search string in the source
 * string. Rreturns Null if none found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	char *match;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				match = &haystack[i];

				while (haystack[i] == needle[j])
				{
						i++;
						j++;
						if (needle[j] == '\0')
							return (match);
				}
			}
			j++;
		}
	i++;
	}
	return ('\0');
}
