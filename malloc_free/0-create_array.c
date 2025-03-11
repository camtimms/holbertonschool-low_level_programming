#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of a character
 *
 * @size: Size of the array
 * @c: Character to initilize array
 *
 * Description: Creates an array and initilize it with a character
 *
 * Return: Pointer to array (0) or Error (1)
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0; /* Iterator */

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
		return (arr);

	while (i != size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
