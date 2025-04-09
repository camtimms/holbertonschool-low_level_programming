#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 of a unsigned long int at a given
 * index
 *
 * @n: Pointer to an unsigned long integer
 * @index: Index
 *
 * Description: Sets the value of a bit to 0 at a given index
 *
 * Return: (1) Success or (-1) failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~0;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
