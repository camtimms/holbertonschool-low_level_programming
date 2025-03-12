#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of ints in order
 *
 * @min: Minimum number in range
 * @max: Maximum number in range
 *
 * Description: Creates an array of ints from min to max
 *
 * Return: Pointer to array, if min > max (NULL) or malloc fails (NULL)
 */

int *array_range(int min, int max)
{
	int *array;
	int size = max - min + 1;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
