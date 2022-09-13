#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @n: the given integer to compute its absolute value
 *
 * Return: n or n * -1
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
