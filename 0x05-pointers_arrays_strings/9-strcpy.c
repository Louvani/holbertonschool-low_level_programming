#include "holberton.h"

/**
 * _strcpy - function that copies the string from src to dest.
 * @dest: pointer to p. will recive the copy of src
 * @src: source point to s1.
 * Return: Always dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
