#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: NULL if ac == 0 or av == NULL
 *  a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, counter;
	char *newStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (counter = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			counter++;
		counter++;
	}

	newStr = malloc((counter + 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (i = j = k = 0; k < counter; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			newStr[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < (counter - 1))
			newStr[k] = av[i][j];
	}
	newStr[k] = '\0';
	return (newStr);
}
