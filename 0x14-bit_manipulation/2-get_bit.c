#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 *
 * @n: the unsigned int value whose bit is to be checked
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 1 << index; i > 0; i /= 2)
	{
		if ((n & i) >= 1)
		{
			return (1);
		}
		else
			return (0);
	}
	return (-1);
}
