#include "holberton.h"

/**
 * *_strpbrk - function that gets the length of a prefix substring
 * @s: String
 * @accept: second string
 * Return:  the num of bytes in the initial segment of s.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;
	char *p = haystack;

	for (j = 0; p[j] != '\0'; j++)
	{
		if (p[j] == *needle)
		{
			return (p + j);
		}
	}
	return (0);
}