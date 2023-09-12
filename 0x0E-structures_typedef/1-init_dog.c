#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog struct
 * @d: structname
 * @name: dog name
 * @age: age of the dog
 * @owner: owner name
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
