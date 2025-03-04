#include "main.h"

/**
 * reverse_array - Reverses an array of ints
 *
 * @a: Array of integers
 * @n: Number of elements in the array
 *
 * Description: Create a temporary interger to store the last value specified
 * by n. The swap the first and last value and incrementing towards the middle.
 *
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp; /* Temporary position to swap ints */
	int i = 0; /* Pointer */

	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
