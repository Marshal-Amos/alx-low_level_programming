#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: a positiv integer parameter
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, the exit value is 98
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
