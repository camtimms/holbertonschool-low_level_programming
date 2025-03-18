#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Run the calculator
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Description: Checks for errors with input arguments then finds the correct
 * operation and computes it.
 *
 * Return: - Success (0)
 * - Number of arguments is wrong (98)
 * - Operator is none of the above (99)
 * - Divides/Mod by 0 (100)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
