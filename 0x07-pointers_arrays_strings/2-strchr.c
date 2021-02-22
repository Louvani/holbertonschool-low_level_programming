#include "holberton.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: string
 * @c: character to locates
 * Return: 0 or
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = s;

	while (*s != c)
	{
		++s;
		++i;
	}
	if (*s == c)
		return (p + i);
	else
		return (0);
}
