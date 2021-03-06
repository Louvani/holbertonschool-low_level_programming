#include "holberton.h"
/**
 * myStrlen - function that concatenates two strings.
 * @p: variable to determine the dest lenght.
 * Return: always count.
 */

int myStrlen(char *p)
{
	int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
/**
 * append_text_to_file -  appends text at the end of a file
 * @filename:is the name of the file to create.
 * @text_content:is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /*file descriptor*/
	int i;
	int len; /*lenght of the text_content*/

	if (filename == NULL)
		return (-1);
	/*open the file and check*//*Do not create the file if it does not exist*/
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	/*If text_content is NULL, do not add anything to the file. Return 1 */
	if (text_content != NULL)
	{
		len = myStrlen(text_content);
	}
	else
		return (1);
	i = write(fd, text_content, len);
		if (i == -1)
		{
			return (-1);
		}

	close(fd);
	return (1);
}
