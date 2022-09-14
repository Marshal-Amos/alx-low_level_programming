#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;
	int num_1, num_2, fib_n;
	int sum = 0;

	num_1 = 1;
	num_2 = 2;

	for (counter = 3; counter < 4000000; counter++)
	{
		fib_n = num_1 + num_2;

		if (num_1 % 2 == 0)
		{
			sum += num_1;
		}
		num_1 = num_2;
		num_2 = fib_n;
	}
	printf("%d\n", sum);
	return (0);
}
