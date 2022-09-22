#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @c: pointer
 *
 * Return: character
 */

char *cap_string(char *c)
{
	int i;

	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
		{
			i++;
		}

		if (c[i - 1] == ' ' ||
				c[i - 1] == '\t' ||
				c[i - 1] == '\n' ||
				c[i - 1] == ',' ||
				c[i - 1] == '.' ||
				c[i - 1] == ';' ||
				c[i - 1] == '!' ||
				c[i - 1] == '?' ||
				c[i - 1] == '"' ||
				c[i - 1] == '(' ||
				c[i - 1] == ')' ||
				c[i - 1] == '{' ||
				c[i - 1] == '}' ||
				i == 0)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}