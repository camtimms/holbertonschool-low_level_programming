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

	if (str == NULL)
		return (NULL);

	dup = malloc(sizeof(str));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	return (dup);
}


