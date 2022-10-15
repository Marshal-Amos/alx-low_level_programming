#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 *
 * @separator: the character to separate the numbers with
 * @n: the number of arguments passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(ap);
}
