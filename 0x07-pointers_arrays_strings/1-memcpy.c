#include "main.h"

/**
 * _memcpy - a function copies n bytes from memory area src
 * to memory area dest
 *
 * @dest: pointer 1
 * @src: pointer 2
 * @n: parameter
 *
 * Return: character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
