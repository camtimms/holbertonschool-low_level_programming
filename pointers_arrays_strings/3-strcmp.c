#include "main.h"

/**
 * _strcmp - Compares 2 strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Description: _strcmp() returns an integer indicating the result
 * of the comparison.
 *
 * Return:
 *  0,  if the s1 and s2 are equal;
 * -1, a negative value if s1 is less than s2;
 * +1, a positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int val = 0;
	int i = 0; /* Pointer */

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (val = s1[i] - s2[i]);

		if (s1[i] > s2[i])
			return (val = s1[i] - s2[i]);

		i++;
	}
	return(val);
}

