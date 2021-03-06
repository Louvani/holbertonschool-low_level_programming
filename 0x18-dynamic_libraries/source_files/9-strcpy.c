#include "holberton.h"

/**
 * _strcpy - function that copies the string from src to dest.
 * @dest: pointer to p. will recive the copy of src
 * @src: source point to s1.
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = _strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i < len)
	{
		i++;
		dest[i] = '\0';
	}
	return (dest);
}