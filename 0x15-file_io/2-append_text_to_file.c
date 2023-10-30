#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[l])
		l++;
	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	w = write(fd, text_content, l);
	if (w == -1 || w != l)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
