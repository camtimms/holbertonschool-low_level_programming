#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array of intergers
 *
 * @width: Width of array
 * @height: Height of array
 *
 * Description: Returns a pointer to a 2D array of intergers
 *
 * Return: Pointer () or failure (NULL)
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0; /* Iterators */
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i]  == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
