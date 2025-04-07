#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary string to unsigned int
 *
 * @b: Binary String
 *
 * Description: Finds the end of the string then works backwards
 * adding to the total by mulitplying power and bases.
 *
 * Return: The converted number (unsigned int) or (0) if there is a character
 * within the binary string or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int base = 1;
	int total = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	i--;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			total += base;
		base *= 2;
		i--;
	}
	return (total);
}
