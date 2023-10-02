#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
	perror("open");
	return (-1);
	}

	if (text_content != NULL)
	{
	while (text_content[len] != '\0')
	{
	len++;
	}

	if (write(fd, text_content, len) == -1)
	{
	perror("write");
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);
}
