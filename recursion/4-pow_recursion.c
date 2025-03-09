#include "main.h"

/**
 * _pow_recursion - Returns the value of x to the power of y.
 *
 * @x: Base int
 * @y: Power int
 *
 * Description: Returns the value x raised to the power y.
 *
 * Return: Result (int), Error (-1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
