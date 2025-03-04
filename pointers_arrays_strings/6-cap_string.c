#include "main.h"

/**
 * cap_string - Capitalizes the first letter in each word.
 *
 * @str: String
 *
 * Description: Capitalizes the first letter in each word.
 *
 * Return: char *
 */

char *cap_string(char *str)
{
	int n = 0; /* Pointer */
	int i = 0; /* Pointer for sep */
	char sep[] = " /t/n,;.!?\"(){}"; /* Separators */

	while (str[n] != '\0')
	{
		if (str[n] <= 'a' && str[n] >= 'z')
		{
			i = 0;
			while (sep[i] != '\0')
			{
				if (str[n - 1] == sep[i])
					str[n] = 'A' + (str[n] - 'a');
			i++;
			}
		}
	n++;
	}
	return (str);
}
