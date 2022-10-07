#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 *
 * @min: starting number
 * @max: ending number
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *intArray;

	if (min > max)
		return (NULL);

	intArray = malloc(sizeof(*intArray) * ((max - min) + 1));

	if (intArray == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		intArray[i] = min;
		min++;
	}
	return (intArray);
}
