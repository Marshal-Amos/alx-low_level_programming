#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != (bytes - 1))
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
