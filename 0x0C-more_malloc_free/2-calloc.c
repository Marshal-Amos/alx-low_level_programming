#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * The _calloc function allocates memory for an array of nmemb elements of
 * size bytes each and returns a pointer to the allocated memory
 * The memory is set to zero
 *
 * @nmemb: a positive integer that determines the array elements
 * @size: a positive integer that determines the array size
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *strArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	strArray = malloc(nmemb * size);

	if (strArray == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		strArray[i] = 0;
	}
	return (strArray);
}
