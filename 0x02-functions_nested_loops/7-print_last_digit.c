#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @c: the integer value
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	_putchar('0' + _abs(c % 10));
	return (_abs(c % 10));
}
