#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes/char
 *
 * Description: Copies a string from the source (src) to the destination (dest)
 * using at most n bytes.
 *
 * Return: Destination String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0; /* Pointer */

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
