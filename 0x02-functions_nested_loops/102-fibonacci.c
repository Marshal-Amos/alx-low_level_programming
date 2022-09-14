#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;
	long int num_1, num_2, fib_n;

	num_1 = 1;
	num_2 = 2;
	printf("%ld, %ld", num_1, num_2);
	for (counter = 0; counter < 48; counter++)
	{
		fib_n = num_1 + num_2;
		printf(", %ld", fib_n);
		num_1 = num_2;
		num_2 = fib_n;
	}
	printf("\n");
	return (0);
}
