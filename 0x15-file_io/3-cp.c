#include "holberton.h"
#include <stdlib.h>
/**
 * main - program that copies the content of a file to another file.
 * @argc:Counter of arguments
 * @argv: arguments
 * Return: 0 if have more than 1 arguments.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*open files*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	/*copy on the second file*/
	read_and_write(file_from, file_to, argv[1], argv[2]);

	close_file(file_from);
	close_file(file_to);
	return (0);
}
/**
 * read_and_write - read file from and copy into file to
 * @fd_from: file descriptor for the source file
 * @fd_to: file descriptor for the dest file
 * @n_from: name of the source file
 * @n_to: name of the dest file
 * Return: 0 on success
*/
int read_and_write(int fd_from, int fd_to, char *n_from, char *n_to)
{
	int read_result, write_result, i = 0;
	char buffer[1024];

	read_result = read(fd_from, buffer, 1023);
	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", n_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	while (read_result > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", n_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
		while (i < 1024)
		{
			buffer[i] = '\0';
			i++;
		}
	}
	return (0);
}
/**
 * close_file - close X file.
 * @file: file to close
 * Return: 0 on success, exit 100 if fails
*/
int close_file(int file)
{
	int close_file;

	close_file = close(file);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
	return (0);
}
