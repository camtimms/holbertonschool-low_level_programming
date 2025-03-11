#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Description: Concatenates two strings
 *
 * Return: Pointer to concatenated string, Empty string (NULL) or failure
 * (NULL).
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0; /* Length of each string */
	int total_l; /* Length of both string combined */
	char *concat;
	int i;

	/* If Null is passed, treat as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Find length of each string */
	while (s1[l1] != '\0')
	  	l1++;

	while (s2[l2] != '\0')
		l2++;;

	total_l = l1 + l2 + 1;
	/* Add 1 to account for /0 at end of the string */

	concat = malloc(total_l);

	if (concat == NULL)
		return (NULL);

	i = 0;
	while (i < l1)
	{
		concat[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < l2)
	{
		concat[l1 + i] = s2[i];
		i++;
	}

	concat[total_l - 1] = '\0'; /* Add Null to end of string */

	return(concat);
}
