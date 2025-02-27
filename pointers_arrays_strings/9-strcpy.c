#include "main.h"

/**
 * *_strcpy - Copies a string
 *
 * @src: Pointer to the start of the string
 * @dest: Destination of the string
 * Description: Copies a string to a new location
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
