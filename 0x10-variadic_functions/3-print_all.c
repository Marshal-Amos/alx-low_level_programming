#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - a function that prints character
 *
 * @ap: list to be provided
 *
 * Return: Always 0 (Success)
 */
int print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
	return (0);
}


/**
 * print_i - a function that prints integer
 *
 * @ap: list to be provided
 *
 * Return: Always 0 (Success)
 */
int print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
	return (0);
}


/**
 * print_f - a function that prints float
 *
 * @ap: list to be provided
 *
 * Return: Always 0 (Success)
 */
int print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
	return (0);
}


/**
 * print_s - a function that prints string
 *
 * @ap: list to be provided
 *
 * Return: Always 0 (Success)
 */
int print_s(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", str);
	return (0);
}


/**
 * print_all - a function that prints anything
 *
 * @format: is a list of types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator1 = "";
	char *separator2 = ", ";

	va_list argument;

	print_func ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(argument, format);
	i = 0;

	while (format != NULL && format[i])
	{
		j = 0;
		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].c))
			{
				printf("%s", separator1);
				ops[j].f(argument);
			}
			j++;
		}
		separator1 = separator2;
		i++;
	}
	printf("\n");
	va_end(argument);
}
