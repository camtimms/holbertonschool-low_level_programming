#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - Calculates the number of bits to flip to change one number to
 * another
 *
 * @n: 1st Integer
 * @m: 2nd Integer
 *
 * Description: Finds the difference between two ints but using an
 * XOR which shows a difference in bits. Uses the Brian Kernighan
 * algorithm to count 1 bits.
 *
 * Return: The number of different bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned long int bit_diff = 0;


	bit_diff = n ^ m;

	while (bit_diff != 0)
	{
		bit_count += bit_diff & 1;
		bit_diff >>= 1;
	}
	return (bit_count);
}
