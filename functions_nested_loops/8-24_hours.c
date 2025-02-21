#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		m = 0; /* Restet minutes to 0 at the start of each hour*/
		while (m < 60)
		{
			_putchar('0' + h / 10); /* /10 to get the 10's digit*/
			_putchar('0' + h % 10); /* %10 to get the 1's digit*/
			_putchar(':');
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
