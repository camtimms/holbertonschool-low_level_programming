#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free's the array created by the last function alloc_grid
 *
 * @grid: Array
 * @height: Height of the array
 *
 * Description: Frees the memory from the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return (NULL);

	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
