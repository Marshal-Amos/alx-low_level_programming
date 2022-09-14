#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int counter;
	long int num_1, num_2, fib_n;
	long int sum = 0;

	num_1 = 1;
	num_2 = 2;

	for (counter = 0; counter < 4000000; counter++)
	{
		fib_n = num_1 + num_2;
		num_1 = num_2;
		num_2 = fib_n;
		if (num_1 % 2 == 0)
		{
			sum += fib_n;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
