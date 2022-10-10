#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 *
 * @d: structure
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
