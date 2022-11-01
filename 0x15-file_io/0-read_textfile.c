#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 *
 * @filename: the file to be printed
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int len;
	char *buf;

	buf = malloc(sizeof(ssize_t) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	close(fd);

	for (len = 0; buf[len] != '\0'; len++)
	{
	}

	write(1, buf, letters);

	free(buf);
	return (len);
}
