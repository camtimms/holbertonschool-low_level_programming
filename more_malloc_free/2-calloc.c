#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array
 *
 * @nmemb: Number of memory bytes
 * @size: Size of data type (bytes)
 *
 * Description: Allocates memory for an array using malloc
 *
 * Return: Pointer to an array, on failure (NULL) or size = 0 (NULL)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *ptr_array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	ptr_array = array; /* Initalise array after making it */

	/* memset was reccommended rather than a loop usually */
	for (i = 0; i < nmemb * size; i++)
	{
		ptr_array[i] = 0;
		/* Because array is void* to move through it use a pointer */
	}

	return (array);
}
