#include "main.h"

/**
 * _islower - a function that checks if a given character
 * is a lower case alphabet
 *
 * @c: character to check
 *
 * Return: 1 if it is a lower case alphabet
 * 0 if it is otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
