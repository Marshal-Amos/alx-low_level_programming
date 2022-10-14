#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: an array that contains integers to be search
 * @size: the size of the array
 * @cmp: a pointer to a function used to compare
 *
 * Return: integer of the index position
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
