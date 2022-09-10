#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_n, second_n, third_n;

	for (first_n = 0; first_n < 8; first_n++)
	{
		for (second_n = 1; second_n < 9; second_n++)
		{
			for (third_n = 2; third_n < 10; third_n++)
			{
				if (first_n == second_n || first_n == third_n || second_n == third_n)
				{
					continue;
				}
				if (first_n > second_n || first_n > third_n || second_n > third_n)
				{
					continue;
				}
				putchar((first_n % 10) + '0');
				putchar((second_n % 10) + '0');
				putchar((third_n % 10) + '0');
				if (first_n < 7 || second_n < 8 || third_n < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
