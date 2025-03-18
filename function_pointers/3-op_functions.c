#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Adds two numbers
 *
 * @a: Int 1
 * @b: Int 2
 *
 * Description: Adds two numbers
 *
 * Return: Sum of two numbers (int)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 *
 * @a: Int 1
 * @b: Int 2
 *
 * Description: Subtracts two numbers
 *
 * Return: Difference of two numbers (int)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 *
 * @a: Int 1
 * @b: Int 2
 *
 * Description: Multiplies two numbers
 *
 * Return: Product of two numbers (int)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 *
 * @a: Int 1
 * @b: Int 2
 *
 * Description: Divides two numbers
 *
 * Return: Quotient of two numbers (int)
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of two numbers
 *
 * @a: Int 1
 * @b: Int 2
 *
 * Description: Finds the remainder of two numbers
 *
 * Return: Remainder of two numbers (int)
 */

int op_mod(int a, int b)
{
	return (a % b);
}
