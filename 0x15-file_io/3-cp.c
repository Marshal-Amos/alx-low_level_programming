#include "main.h"
#include <stdio.h>

/**
 * main - a program that copies the content of a file to another file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd, fd2, copied, read_n;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_n = read(fd, buf, 1024)) > 0)
	{
		copied = write(fd2, buf, read_n);
		if (fd2 == -1 || copied == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fd == -1 || read_n == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd2);
		exit(100);
	}
	free(buf);
	return (0);
}
