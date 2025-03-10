#include "main.h"
#include <stdio.h>

/**
 * args - Prints the number of arguments passed into it
 *
 * @argc: Number of arguments
 *
 * Description: Prints the number of arguments passed into it.
 *
 * Return: argc - 1
 */

int args(int argc)
{
	return (argc - 1);
}

/**
 * main - runs the function
 *
 * @argc: Number of argumentts
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", args(argc));

	return (0);
}
