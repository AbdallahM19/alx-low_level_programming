#include "main.h"

/**
 * read_textfile - Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: is a pointer
 * @letters: number of letters
 * Return: the actual number of letters read and printed
 * or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	ssize_t n = read(fd, buffer, letters);

	if (n == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	ssize_t bytes = write(STDOUT_FILENO, buffer, n);

	if (bytes == -1 || bytes != n)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytes);
}
