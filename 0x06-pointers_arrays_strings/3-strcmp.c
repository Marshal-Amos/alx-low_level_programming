#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: integer
 */


int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
