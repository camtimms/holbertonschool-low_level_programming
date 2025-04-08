#include "main.h"
#include <stdlib.h>

/**
 * get_bit - Retrieves the bit at an index for an integer n.
 *
 * @n: Integer
 * @index: Index of bit
 *
 * Description: Returns the value of a bit at a given index
 *
 * Return: Value of the bit an index (1 or 0) or (-1) if it fails
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
