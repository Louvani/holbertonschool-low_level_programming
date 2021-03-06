#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr -  function that locates a substring.
 * @haystack: String
 * @needle: second string
 * Return:  the num of bytes in the initial segment of s.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}

		if (!*j)
		{
			return (i);
		}
		haystack = i + 1;
	}
	return ('\0');
}
