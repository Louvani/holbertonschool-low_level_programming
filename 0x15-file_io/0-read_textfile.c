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
	int len_buffer;

	/*open and read file*/
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	read(file_descriptor, buffer, letters);

	close(file_descriptor);
	/*Put the text into an auxiliar variable*/
	len_buffer = myStrlen(buffer);

	buffer[len_buffer + 1] = '\0';

	len_buffer = myStrlen(buffer);
	write(1, buffer, len_buffer);
	free(buffer);
	return (len_buffer);
}
