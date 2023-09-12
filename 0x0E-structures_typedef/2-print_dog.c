#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog- print dog
 * @d: dog struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	if (d->age >= 0)
		printf("Age: %0.6f\n", d->age);
	else
		printf("Age: (nil)\n");
	printf("Owner: %s\n", d->owner);
}
