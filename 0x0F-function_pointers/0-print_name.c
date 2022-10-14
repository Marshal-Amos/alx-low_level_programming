#include "function_pointers.h"

/**
 * print_name -  a function that prints a name
 *
 * @name: name of a person
 * @f: pointer to a function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *);

	ptr = &f;
	ptr(name);
}
