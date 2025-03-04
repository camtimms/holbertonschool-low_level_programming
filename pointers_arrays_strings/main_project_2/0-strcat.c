#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string you want to append to
 * @src: String to want to append
 * Description: This function first finds the length of the first string then
 * appends to the end of it by going through the length of the second string
 * incrementing the lengths of each array.
 * Return: Pointer to the total string
 */

char *_strcat(char *dest, char *src)
{
	int length_dest = 0; /* Length of dest */
	int length_src = 0; /* Length of src */

	while (dest[length_dest] != '\0')
		length_dest++;

	while (src[length_src] != '\0')
	{
		dest[length_dest] = src[length_src];

		length_dest++;
		length_src++;
	}
	return (dest);
}
