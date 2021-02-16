#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *@s: variable with the string
 *@l: Kepp the length of the sttring
 *
 * Return: always 0.
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
