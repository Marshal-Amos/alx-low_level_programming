#include "main.h"

/**
 * reverse_array -  a function that reverses the content of an
 * array of integers
 *
 * @a: pointer
 * @n: parameter
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n; a[i] >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	printf('\n');
}
