#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - a function for addition
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub  - a function for subtraction
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function for multiplication
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function for division
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function for modulo operation
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: an integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
