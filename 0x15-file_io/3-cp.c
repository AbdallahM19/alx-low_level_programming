#include "main.h"

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
	int from_fd, to_fd, ch_r, ch_w;
	char buf[BUF_SIZE];

	if (ac != 3)
		dprintf(2, "Usage: %s file_from file_to\n", av[0]), exit(97);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
				S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (to_fd == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((ch_r = read(from_fd, buf, BUF_SIZE)) > 0)
	{
		ch_w = write(to_fd, buf, ch_r);
		if (ch_w == -1)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (ch_r == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(from_fd) == -1)
		dprintf(2, "Error: Can't close fd %d\n", from_fd), exit(100);
	if (close(to_fd) == -1)
		dprintf(2, "Error: Can't close fd %d\n", to_fd), exit(100);
	return (0);
}
