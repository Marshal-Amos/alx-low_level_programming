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

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
		}
		wrote = write(fd, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
