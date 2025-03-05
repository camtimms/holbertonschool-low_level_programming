#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @src:  Source
 * @dest: Destination
 * @n:	  Number of bytes
 *
 * Description: Copies n number of bytes from source area to destination area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
