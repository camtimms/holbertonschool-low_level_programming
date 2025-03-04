#include "main.h"

/**
 * leet - Changes a string to l33t speak.
 *
 * @str: Input string
 *
 * Description:
 *
 * Return: Output string
 */

char *leet(char *str)
{
	int n = 0, i = 0; /* Pointers */
	char alpha[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	while (str[n] != '\0')
	{
		i = 0;
		while (alpha[i] != '\0')
		{
			if (str[n] == alpha[i])
			{
				str[n] = leet[i];
			}
			i++;
		}
		n++;
	}
	return (str);
}
