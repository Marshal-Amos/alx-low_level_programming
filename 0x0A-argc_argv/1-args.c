#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0 (Succcess)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
