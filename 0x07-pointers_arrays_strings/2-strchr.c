#include "holberton.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: string
 * @c: character to locates
 * Return: 0 or
 */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
		return (s);
	} while (*s++);

	return (0);
}
