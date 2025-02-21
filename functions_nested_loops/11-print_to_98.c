#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints the numbers to 98
 *
 * @n: input number
 * Description: prints all the natural numbers from n to 98
 * return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	/* For when n = 98 */
	printf("%d\n", n);
}
