#include "main.h"

/**
 * times_table - prints the times table
 *
 * Description: prints the times tables up to 9
 * Return: void
 */
void times_table(void)
{
	int n; /* time table factor */
	int x; /* multiplier */
	int result; /* stores the result of n * x */

	for (n = 0; n <= 9; n++)
	{
		for (x = 0; x <= 9; x++)
		{
			result = n * x;

			if (x == 0)
				_putchar('0' + result);

			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (x < 9)
				_putchar(',');

		}
	_putchar('\n');
	}
}
