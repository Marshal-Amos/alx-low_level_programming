#include "main.h"

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
	int wrote, read_n;
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

	read_n = read(fd, buf, letters);
	if (read_n == -1)
		return (0);

	close(fd);

	wrote = write(1, buf, read_n);
	if (wrote == -1 || wrote != read_n)
		return (0);

	free(buf);
	return (wrote);
}
