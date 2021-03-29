#include "holberton.h"

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

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	read(file_descriptor, buffer, letters);
	buffer[letters + 1] = '\0';

	close(file_descriptor);
	write(1, buffer, letters + 1);
	free(buffer);
	return (letters);
}
