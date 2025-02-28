#include "main.h"

/**
 * _atoi - Converts a string into an integer
 *
 * @s: Input string
 * Description:
 * Return: Int
 */

int _atoi(char *s)
{
	int n = 0; /* Pointer */
	int sign = 1; /* Keeps track of the number's sign */
	int start_num = 0; /* Found the start of the number */
	int end_num = 0; /* Finished recording number */
	int final_num = 0; /* Final output number */

	while (s[n] != '\0')
	{
		if (s[n] == '-' && start_num == 0)
		{
			sign = sign * -1;
		}

		if (s[n] >= '0' && s[n] <= '9' && end_num == 0)
		{
			start_num = 1;
			final_num = (final_num * 10) + (s[n] - '0') * sign;
		}
		else if (!(s[n] >= '0' && s[n] <= '9') && start_num == 1)
		{
			end_num = 1;
		}

		n++;
	}
	return (final_num);
}
