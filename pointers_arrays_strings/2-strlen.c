#include "main.h"

/**
 * _strlen - Prints the string length
 *
 * @s: Pointer to the start of a string
 * Description: Prints the length of a string by counting the number of memory
 * positions until the end of the array
 * Return: int
 */
int _strlen(char *s)
{
	int n = 0; /* String length counter */

	while (s[n] != '\0') /* Stops at Null char */
	{
		n++;
	}
	return (n);
}
