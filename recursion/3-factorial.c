#include "main.h"

/**
 * factorial - Returns factorial of a number
 *
 * @n: Interger
 *
 * Description: Returns the factorial of a number using recursion
 *
 * Return: Factorial (int), Error (-1 )
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 1)
		return (1);

	return (n * factorial(n - 1));
}
