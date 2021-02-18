#include "holberton.h"

unsigned int myStrlen(char *p);
/**
 * *_strcat - function that concatenates two strings
 * @dest: first string.
 * @src: second string.
 * Return: Always
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = myStrlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

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
