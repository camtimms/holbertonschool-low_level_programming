#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory from the struct dog_t
 *
 * @d: Pointer to the dog_t struct
 *
 * Description: Frees the memort from the struct dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
