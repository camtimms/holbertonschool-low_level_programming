#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if number is positive or negative
 *
 * Description: Uses if, elif and else statements to check if
 * the number is positive or negative or 0.
 *
 * Return: Always 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
					{
						printf("%d is positive\n", n);
					}
					else if (n < 0)
					{
						printf("%d is negative\n", n);
					}
					else
					{
						printf("%d is zero\n", n);
					}
					return (0);
}
