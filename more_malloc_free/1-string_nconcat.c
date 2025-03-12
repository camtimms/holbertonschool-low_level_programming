#include "main.h"
#include <stdlib.h>

/**
 * null_check - checks if Null is passed
 *
 * @s: String
 *
 * Description: Checks if a string is Null
 * Return: Empty string ("")
 */

char *null_check(char *s)
{
	if (s == NULL)
		s = "";
	return (s);
}
/**
 * str_len - Finds the length of a string
 *
 * @str: String
 *
 * Description: Returns the length of a string, excluding the null char
 *
 * Return: Length of the string (int L)
 */

int str_len(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	return (l);
}

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Size of memory
 *
 * Description: Concatenates two strings by allocating n memory to the end of
 * s1
 *
 * Return: Pointer to concatenated string or failure (NULL)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1, l2; /* Length of each string */
	unsigned int i;

	/* If Null is passed, treat as empty string */
	s1 = null_check(s1);
	s2 = null_check(s2);

	/* Find length of each string */
	l1 = str_len(s1);
	l2 = str_len(s2);

	if (n >= l2)
		n = l2;

	concat = malloc(l1 + n);
	if (concat == NULL)
		return (NULL);

	i = 0;
	while (i < l1)
	{
		concat[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < n)
	{
		concat[l1 + i] = s2[i];
		i++;
	}

	concat[l1 + i] = '\0'; /* Add Null to end of string */
	return (concat);
}
