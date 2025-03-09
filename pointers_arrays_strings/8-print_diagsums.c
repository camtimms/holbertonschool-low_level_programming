#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix,
 *
 * @a: Pointer to the square matrix
 * @size: Size of the matrix
 *
 * Description: Uses arrays and their notation to print the sum of each of it's
 * diagonals.
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0; /* Curosrs */
	int diag1 = 0, diag2 = 0; /* To store diag sum result */

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				diag1 = diag1 + a[i * size + j];
			if ((i + j) == size - 1)
				diag2 = diag2 + a[i * size + j];
			j++;
		}
		i++;
	}
	printf("%d, %d\n", diag1, diag2);
}
