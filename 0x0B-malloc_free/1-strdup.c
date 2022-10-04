#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: a character pointer
 *
 * Return: NULL if str = NULL
 * returns a pointer to the duplicated string (on Successs)
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *charArray;

	if (str == NULL)
	{
		return (NULL);
	}

	while (i != '\0')
	{
		size++;
	}

	charArray = malloc((size + 1) * sizeof(char));

	if (charArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		charArray[i] = str[i];
	}
	return (charArray);
}
