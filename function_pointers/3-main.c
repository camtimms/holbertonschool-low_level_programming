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
	char *operation = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (argv[3] == 0)
	{
		printf("Error\n");
		return (100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(operation)(num1, num2);

	if (result == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", result);

	return (0);
}
