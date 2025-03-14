#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialises the dog structure
 *
 * @d: Address of the structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Ownder of the dog
 *
 * Description: Initalises the dog structure
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
