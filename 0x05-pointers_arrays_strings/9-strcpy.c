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

	if (len == 0)
	{
		dest = '\0';
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * _strlen - returns the length of a string
 *@s: variable with the string
 *
 * Return: always l.
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
