#include "main.h"

/**
 * helper - Helper function for _sqrt_recursion
 *
 * @n: Squared number
 * @x: Base
 *
 * Description: Takes guesses incrementing x until it equals n or not.
 *
 * Return: Square root (int), No ntaural square root (-1).
 */

int helper(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);

	return (helper(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: Interger
 *
 * Description: Returns the natural square root of a number if it exists.
 *
 * Return: Square root (int), No ntaural square root (-1).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, 0));
}
