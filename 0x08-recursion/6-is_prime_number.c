#include "main.h"

/**
 * is_prime - checks if a given number is a prime number
 *
 * @n: the given number
 * @c: parameter that does the counting
 *
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, c + 1));
}


/**
 * is_prime_number - checks if a given number is a prime number
 *
 * @n: parameter
 *
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}