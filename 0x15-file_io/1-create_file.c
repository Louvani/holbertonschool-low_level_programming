#include "holberton.h"

/**
 * myStrlen - function that concatenates two strings.
 * @p: variable to determine the dest lenght.
 * Return: always count.
 */

unsigned int myStrlen(char *p)
{
	unsigned int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
/**
 * create_file - function that creates a file.
 * @filename:is the name of the file to create.
 * @text_content:is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, b_write;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_CREAT | 0600);
	if (file_descriptor == -1)
		return (-1);
	if (text_content == NULL)
		return (0);
	else
		b_write = write(file_descriptor, text_content, myStrlen(text_content));
	if (b_write == -1)
		return (-1);
	return (0);
}
