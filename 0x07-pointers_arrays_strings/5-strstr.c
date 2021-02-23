#include "holberton.h"

/**
 * *_strpbrk - function that gets the length of a prefix substring
 * @s: String
 * @accept: second string
 * Return:  the num of bytes in the initial segment of s.
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	while (*haystack)
	{
		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}

		if (!*j)
		{
			return i;
		}
		haystack = i + 1;		
	}
	return (0);
}