#include "main.h"

/**
 * swap_int - Swaps the values of two ints
 *
 * @a: int 1
 * @b: int 2
 * Descrition: Uses pointers and swaps the values of two ints in it's memory
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
