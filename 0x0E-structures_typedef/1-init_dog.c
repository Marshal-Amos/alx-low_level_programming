#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * @d: structure
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
