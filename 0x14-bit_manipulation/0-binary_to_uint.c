#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *         * there is one or more chars in the string b that is not 0 or 1
 *         * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted;
	unsigned int power;
	unsigned int integer;
	unsigned int value;
	const char *holder;

	holder = b;
	power = 0;
	converted = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}
	b--;

	while (b >= holder)
	{
		integer = *b - '0';
		value = integer * (1 << power);
		converted += value;
		power++;
		b--;
	}
	return (converted);
}
