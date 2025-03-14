#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Prints the string length
 *
 * @s: Pointer to the start of a string
 * Description: Prints the length of a string by counting the number of memory
 * positions until the end of the array
 * Return: int
 */
int _strlen(char *s)
{
	int n = 0; /* String length counter */

	while (s[n] != '\0') /* Stops at Null char */
	{
		n++;
	}
	return (n);
}

/**
 * *_strcpy - Copies a string
 *
 * @src: Pointer to the start of the string
 * @dest: Destination of the string
 * Description: Copies a string to a new location
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a "new dog"
 *
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: Owner of the new dog
 *
 * Description
 *
 * Return: Pointer to the structure of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_p;
	char *owner_p;

	d = malloc(sizeof(dog_t));
	if (d ==  NULL)
		return (NULL);

	name_p = malloc(_strlen(name) + 1);
	if (name_p == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(name_p, name);

	owner_p = malloc(_strlen(owner) + 1);
	if (owner_p == NULL)
	{
		free(name_p);
		free(d);
		return (NULL);
	}
	_strcpy(owner_p, owner);

	d->name = name_p;
	d->age = age;
	d->owner = owner_p;

	return (d);
}
