#include "main.h"

/**
 * prime_helper - Helper function for is_prime_number
 *
 * @n: Possible prime.
 * @x: Guess number from 2 to n.
 *
 * Description: Starts from 2 and increases until it finds a number that
 * divides into n or it reaches n. Technically you only need to check other
 * prime up to sqrt(n) because if n has a sqrt it is not prime. ALthough we
 * can't do that unless we use the standard libary or complile the
 * _sqrt_recursion function as well.
 *
 * Return: Is prime (1), Not prime (0).
 */

int prime_helper(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);

	return (prime_helper(n, x + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 *
 * @n: Integer
 *
 * Description: Uses recursion to find if a number is prime.
 *
 * Return: Is prime (1), Not prime (0).
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);

	if (n < 0)
		return (0);

	return (prime_helper(n, 2));
}
