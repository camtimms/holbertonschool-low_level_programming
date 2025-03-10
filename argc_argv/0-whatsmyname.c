#include "main.h"
#include <stdio.h>

/**
 * mynameis - Prints the name of the function itself.
 *
 * @argv: Argument vector to the function.
 *
 * Description: No arguments needed always prints the name of it self.
 * Return: Always 0
 */

int mynameis(char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

int main(int argc, char *argv[])
{
	(void)argc; /* Surpresses parameter warning */

	mynameis(argv);

	return (0);
}
