#include "holberton.h"

/**
 * *_strstr -  function that locates a substring.
 * @haystack: String
 * @needle: second string
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
			haystack = i + 1;
		}
	}
	return (0);
}
