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
	int j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
