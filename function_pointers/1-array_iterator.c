#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Iterates through an array and applies a functoin
 *
 * @array: Array to interate through
 * @size: Size of the array
 * @action: Function to work on the array element
 *
 * Description: Iterates through an array of known size and applies a function
 * to each element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0; /* Iterator */

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
