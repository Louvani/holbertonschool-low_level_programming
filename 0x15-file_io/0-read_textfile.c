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
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be readed
 * @letters:is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t /*len_buffer,*/i, j;

	if (filename == NULL)
		return (0);

	/*open and read file*/
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	j = read(file_descriptor, buffer, letters);
	if (j == -1)
		return (0);

	/*print buffer*/
	i = write(STDOUT_FILENO, buffer, j);
	if (i == -1)
		return (0);
	close(file_descriptor);
	free(buffer);

	return (i);
}
