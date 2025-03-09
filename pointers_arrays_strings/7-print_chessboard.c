#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 *
 * @a: Pointer to the memory that stores the chessboard.
 *
 * Description: Prints a chessboard to console
 * Return:  void
 */

void print_chessboard(char (*a)[8])
{
	int rank = 0, file = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[file][rank]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
