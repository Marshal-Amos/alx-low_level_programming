#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: the name of file to be created
 * @text_content: the string to be copied into filename
 *
 * Return: Always 1 (Success) or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrote, len;

	if (filename == NULL)
	{
		return (-1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
	{
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		write(fd, "", 1);
	}
	else
	{
		wrote = write(fd, text_content, (len + 1));
		if (wrote == -1 || wrote != (len + 1))
			return (-1);
	}
	return (1);
}
