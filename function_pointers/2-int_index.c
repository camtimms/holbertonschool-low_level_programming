#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Searches through an array and finds the first occurrence of an
 * integer
 *
 * @array: Array to search through
 * @size: Size of array
 * @cmp: Comparision function that checks the number
 *
 * Description
 *
 * Return: Location of number in array (int), if no matches (-1) and if
 * size <= 0 (-1).
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int flag;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		flag = cmp(array[i]);

		if (flag != 0)
			return (i);
		i++;
	}
	return (-1);
}
