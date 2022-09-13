#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 * starting with 0
 *
 * @n: the integer that will be provided
 *
 * Return: none
 *
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				product = i * j;
				_putchar(',');
				_putchar(' ');

				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(((product / 100) % 10) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
