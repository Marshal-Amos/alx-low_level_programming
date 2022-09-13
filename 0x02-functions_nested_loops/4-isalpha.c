#include "main.h"

/**
 * _isalpha - a function that checks if a given character is alphabet
 *
 * @c: the given character to be checked
 *
 * Return: 1 if the character given is alphabet
 * 0 if it is otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
