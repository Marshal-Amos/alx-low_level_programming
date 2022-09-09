#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_num, second_num;

	for (first_num = 0; first_num < 9; first_num++)
	{
		for (second_num = 1; second_num < 10; second_num++)
		{
			if (first_num == second_num)
				continue;

			putchar((first_num % 10) + '0');
			putchar((second_num % 10) + '0');

			if (first_num < 9 && second_num < 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
