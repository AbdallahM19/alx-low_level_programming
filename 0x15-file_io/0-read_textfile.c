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
	char *buffer = (char *)malloc(letters);
	ssize_t byte;

	if (!filename || !letters)
		return (0);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	byte = read(fd, buffer, letters);
	byte = write(STDOUT_FILENO, buffer, byte);
	close(fd);
	free(buffer);
	return (byte);
}
