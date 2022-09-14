#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Suuccess)
 */
int main(void)
{
	int num_1, num_2, fib_n, counter;

	num_1 = 1;
	num_2 = 2;
	printf("%d, %d", num_1, num_2);

	for (counter = 0; counter < 96; counter++)
	{
		fib_n = num_1 + num_2;

		printf(", %d", fib_n);
		num_1 = num_2;
		num_2 = fib_n;
	}
	printf("\n");
	return (0);
}
