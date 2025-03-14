#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Details of a dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Storing details of a doggo
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
