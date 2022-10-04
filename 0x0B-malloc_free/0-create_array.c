#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: character to populate the array
 *
 * Return: NULL if size = 0
 * or  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *charArray;

	charArray = malloc(size * (sizeof(char)));

	if (size == 0)
	{
		return (NULL);
	}
	if (charArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(charArray + i) = c;
	}
	return (charArray);
}
