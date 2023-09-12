#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - create new dog
 * @d: dog struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
