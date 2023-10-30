#include "main.h"

/**
 * main - Copies the content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: 0 on success, specific exit codes on failure.
 */
int main(int ac, char *av[])
{
	int from_fd, to_fd, err_close;
	char buffer[1024];
	ssize_t n;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	from_fd = open(av[1], O_RDONLY);
	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (from_fd == -1 || to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", from_fd == -1 ?
				"Can't read from file" : "Can't write to file");
		exit(from_fd == -1 ? 98 : 99);
	}
	while ((n = read(from_fd, buffer, 1024)) > 0)
	{
		if (write(to_fd, buffer, n) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
	}

	if (n == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	err_close = close(from_fd);
	err_close |= close(to_fd);

	if (err_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				err_close == -1 ? from_fd : to_fd), exit(100);

	return (0);
}
