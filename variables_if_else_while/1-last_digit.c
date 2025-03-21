#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks the last digit of a number
 *
 * Description - Uses if, else if and else statements to print a different
 * message depending on the last digit of a random number
 * Return: Always 0
 */
int main(void)
{
		int n, last_digit;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				last_digit = n % 10;
					if (last_digit > 5)
					{
						printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
					}
					else if (last_digit == 0)
					{
						printf("Last digit of %d is %d and is 0\n", n, last_digit);
					}
					else
					{
						printf("Last digit of %d is %d and is less than 6 and not 0\n",
							n, last_digit);
					}
					return (0);
}
