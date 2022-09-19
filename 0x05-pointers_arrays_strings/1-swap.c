#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: pointer
 * @b: pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	int m = *b;

	*a = m;
	*b = n;
}
