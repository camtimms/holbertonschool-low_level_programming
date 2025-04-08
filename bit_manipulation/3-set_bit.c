#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Sets the value of a bit to 1 of a unsigned long int at a given
 * index
 *
 * @n: Pointer to an unsigned long integer
 * @index: Index
 *
 * Description: Sets the value of a bit to 1 at a given index
 *
 * Return: (1) Success or (-1) failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1 << index;

	n = n | mask;

	return (1);
}
