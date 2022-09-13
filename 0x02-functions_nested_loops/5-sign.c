#include "main.h"

/**
 * print_sign - a function that checks the sign of a given integer
 *
 * @n: the given integer to be checked
 *
 * Return: 1 if the given integer is positive
 * 0 if it is 0
 * -1 if it is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
