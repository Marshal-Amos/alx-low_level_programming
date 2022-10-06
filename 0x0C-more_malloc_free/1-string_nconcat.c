#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * 
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If n is greater or equal to the length of s2 then use the entire string s2
 *
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: number of bytes
 *
 * Return: a concatenated string pointer
 * If the function fails, it should return NULL
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	long unsigned int i, j;
	char *strCon;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	strCon = malloc((strlen(s1 + 1) + n) * sizeof(char));

	if (strCon == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		strCon[i] = s1[i];
	}

	if (n >= strlen(s2))
	{
		for (j = 0; j < strlen(s2); j++)
		{
			strCon[i + j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			strCon[i + j] = s2[j];
		}
	}
	strCon[i + j] = '\0';
	return (strCon);
}
