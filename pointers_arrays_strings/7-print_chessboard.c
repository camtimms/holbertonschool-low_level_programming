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

	while (rank < 8)
	{
		file = 0;
		while (file < 8)
		{
			_putchar(a[rank][file]);
			file++;
		}
		_putchar('\n');
		rank++;
	}
}
