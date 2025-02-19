#include <stdio.h>

/**
 * main - prints 2 digit numbers
 *
 * Description: prints all possible combinatinos of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
