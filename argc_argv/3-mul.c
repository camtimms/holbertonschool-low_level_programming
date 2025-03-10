#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mul - Multiplies two numbers
 *
 * @x: Int 1
 * @y: Int 2
 *
 * Description: Multiplies two numbers
 *
 * Return: Product or Error
 */

int mul(int x, int y)
{
	int product;

	product =  x * y;

	return (product);
}

/**
 * main - Runs the program
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Description: Runs the program
 *
 * Return: Product or Error (1)
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]); /* Converts string into int */
	y = atoi(argv[2]);

	printf("%d\n", mul(x, y));

	return (0);
}
