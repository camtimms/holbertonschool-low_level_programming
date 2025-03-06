#include "main.h"
#include <stddef.h>

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
	int i = 0, ii; /* haystack cursors */
	int j = 0, jj; /* needle cursors */
	char *match; /* save start of location where a match has occoured */

	if (needle[0] == '\0') /* If needle is empty, return haystack */
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j]) /* Check for a match */
		{
			match = &haystack[i]; /* Save address if a match is found */
			ii = i; /* Set second cursors to the current positon */
			jj = j;

			/* Check if each element matches and also each string doesn't terminate */
			while (haystack[ii] == needle[jj] &&
			       haystack[ii] != '\0' &&
			       needle[jj]   != '\0')
			{
				ii++;
				jj++;
			}

			/* If we reached the end of needle above then we have a complete match */
			if (needle[jj] == '\0')
			{
				return (match);
			}
		}
		i++;
	}
	return (NULL);
}
