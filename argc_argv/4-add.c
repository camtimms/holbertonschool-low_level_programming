#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Runs the program
 *
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Description: Runs the program
 *
 * Return: Sum of two numbers (0) or Error (1)
 */

int main(int argc, char *argv[])
{
	int sum = 0, num;
	int i = 1;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		num = atoi(argv[i]);

		sum += num;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
