#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_n;
	int second_n;

	for (first_n = 0; first_n <= 99; first_n++)
	{
		for (second_n = first_n + 1; second_n <= 99; second_n++)
		{
			putchar(first_n / 10 + '0');
			putchar(first_n % 10 + '0');
			putchar(' ');
			putchar(second_n / 10 + '0');
			putchar(second_n % 10 + '0');
			if (first_n < 98 || second_n < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
