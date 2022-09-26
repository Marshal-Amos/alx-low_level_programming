#include "main.h"

/**
 * _strstr - a function that locates a substring
 * The function finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 *
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			return (needle);
		}
	}
	return ('\0');
}
