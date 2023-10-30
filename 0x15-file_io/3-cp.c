#include "main.h"

/**
 * f_error - prints error messages and exits with exit number
 * @error: either the exit number or file descriptor
 * @str: name of either file_from or file_to
 * @fd: file descriptor
 *
 * Return: 0 on success
 */
int f_error(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - Entry point, copies the content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: 0 on success, exit codes as specified in the prompt on failure.
 */
int main(int ac, char *av[])
{
	int from_fd, to_fd, ch_r, ch_w;
	char buf[BUF_SIZE];

	if (ac != 3)
		f_error(97, NULL, 0);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		f_error(98, av[1], 0);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_fd == -1)
		f_error(99, av[2], 0);
	while ((ch_r = read(from_fd, buf, BUF_SIZE)) > 0)
	{
		ch_w = write(to_fd, buf, ch_r);
		if (ch_w == -1)
			f_error(99, av[2], 0);
	}
	if (ch_r == -1)
		f_error(98, av[1], 0);
	if (close(from_fd) == -1)
		f_error(100, NULL, from_fd);
	if (close(to_fd) == -1)
		f_error(100, NULL, to_fd);
	return (0);
}
