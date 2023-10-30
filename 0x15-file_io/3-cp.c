#include "main.h"

/**
 * print_error - print STDERR_FILENO
 * @message: pointer
*/
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
}

/**
 * main - Entry point,
 * copies the content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success,
 * exit codes as specified in the prompt on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buf[BUF_SIZE];
	struct stat st;

	if (argc != 3)
		print_error("Usage: cp file_from file_to"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (fstat(fd_from, &st) == -1)
		print_error("Error: Can't get file status"), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written == -1)
			print_error("Error: Can't write to file"), exit(99);
	}
	if (bytes_read == -1)
		print_error("Error: Can't read from file"), exit(98);
	if (close(fd_from) == -1)
		print_error("Error: Can't close file descriptor"), exit(100);
	if (close(fd_to) == -1)
		print_error("Error: Can't close file descriptor"), exit(100);
	return (0);
}
