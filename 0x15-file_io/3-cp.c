#include "main.h"
#include <stdio.h>

/**
 * close_file - a function that closes a file descriptor
 *
 * @fd: the file descriptor to be closed
 *
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - a program that copies the content of a file to another file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_from, copied_to;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC | O_APPEND, 0664);
	while ((read_from = read(fd_from, buf, 1024)) > 0)
	{
		copied_to = write(fd_to, buf, read_from);
		if (fd_to == -1 || copied_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);

	free(buf);
	return (0);
}
