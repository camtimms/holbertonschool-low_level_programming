#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: String
 * Description: Takes a string and reverses it in the memory.
 * Return: void
 */

void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char tmp;

	/* Finds length of string */
	while (s[end])
	{
		end++;
	}
	/* Remove null char */
	end = end - 1;
	/* Swap characters by rotating it through tmp */
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
