#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 *
 * @dest: Destination String
 * @src: Appending String
 * @n: Number of bytes
 *
 * Description:
 * Return: Pointer to the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int n_dest = 0; /* Pointer for dest */
	int n_src = 0; /* Pointer for src */

	while (dest[n_dest] != '\0')
		n_dest++;

	while (src[n_src] != '\0' && n_src != n)
	{
		dest[n_dest] = src[n_src];

		n_dest++;
		n_src++;
	}

	dest[n_dest] = '\0';

	return (dest);
}
