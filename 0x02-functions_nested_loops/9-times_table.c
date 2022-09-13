#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 * starting 0
 *
 * Return: none
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			product = i * j;
			if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				-putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
