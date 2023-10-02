#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: The actual number of bytes the function
 * can read and print on success, or -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buffer;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (-1);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
	close(fd);
	return (-1);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
	free(buffer);
	close(fd);
	return (-1);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
	free(buffer);
	close(fd);
	return (-1);
	}

	free(buffer);
	close(fd);

	return (w);
}

