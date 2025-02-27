#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints a specified number of ints from a array
 *
 * @a: Array
 * @n: Number of spaces
 *
 * Description: Prints a specified number of ints from an array.
 * Return: void
 */

void print_array(int *a, int n)
{
	int start = 0;

	/* Remove 1 from n since we start from 0 */
	n = n - 1;

	while (start <= n)
	{
		if (start == n)
			printf("%d", a[start]);
		else
			printf("%d, ", a[start]);

		start++;
	}
	printf("\n");
}
