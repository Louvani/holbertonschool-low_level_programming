#include "holberton.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename:is the name of the file to create.
 * @text_content:is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	i = dprintf(fd, "%s", text_content);
	if (i == -1)
		return (-1);
	close(fd);

	return (1);
}
