#include "main.h"
#include <stdio.h>

/**
 * args2 - Prints the arguments passed into it
 *
 * @argv: Arguments vector
 * @i: Iterator
 *
 * Description: Prints the number of arguments passed into it.
 *
 * Return: argv
 */

char *args2(char *argv[], int i)
{
	return (argv[i]);
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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", args2(argv, i));
		i++;
	}

	return (0);
}
