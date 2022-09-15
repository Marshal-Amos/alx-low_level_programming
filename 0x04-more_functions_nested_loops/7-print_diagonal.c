#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: parameter
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int counter;
	int space_count;

	for (counter = 1; counter <= n; counter++)
	{
		if (n > 0)
		{
			for (space_count = 1; space_count < counter; space_count++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
