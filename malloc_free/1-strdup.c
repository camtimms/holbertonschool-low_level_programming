#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 *
 * @str: String to be duplicated
 *
 * Description:
 *
 * Return: Pointer to arr (0) or Empty string (NULL)
 */

char *_strdup(char *str)
{
	char *dup;
	int i;
	int length;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		length++;

	dup = malloc(length + 1);

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}


