#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 *
 * @filename: the file to be appended on
 * @text_content: the NULL terminated string to add at the end of filename
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, appended;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
		{
		}
		appended = write(fd, text_content, len);
		if (appended == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
