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

	for (counter = 2; counter <= 98; counter++)
	{
		printf("%d", fib_n);

		if (counter != 98)
		{
			printf(", ");
			fib_n = num_1 + num_2;
			num_1 = num_2;
			num_2 = fib_n;
		}
	}
	printf("\n");
	return (0);
}
