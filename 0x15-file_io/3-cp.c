#include "main.h"

#define USE "Usage: cp file_from file_to\n"
#define ERROR_NOREAD "Error: can't read from file %s\n"
#define ERROR_NOWRITE "Error: can't write to %s\n"
#define ERROR_NOCLOSE "Error: can't close fd %s\n"
#define PER (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - Entry point,
 * copies the content of one file to another
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success,
 * exit codes as specified in the prompt on failure
 */
int main(int ac, char *av[])
{
	int from_fd = 0, to_fd = 0;
	ssize_t a;
	char buf[BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USE), exit(97);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERROR_NOREAD, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PER);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERROR_NOWRITE, av[2]), exit(99);
	while ((a = read(from_fd, buf, BUF_SIZE)) > 0)
		if (write(to_fd, buf, a) != a)
			dprintf(STDERR_FILENO, ERROR_NOWRITE, av[2]), exit(99);
	if (a == -1)
		dprintf(STDERR_FILENO, ERROR_NOWRITE, av[1]), exit(98);
	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, ERROR_NOCLOSE, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERROR_NOCLOSE, from_fd), exit(100);
	return (0);
}
