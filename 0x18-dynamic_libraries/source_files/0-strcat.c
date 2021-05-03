#include "holberton.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: first string.
 * @src: second string.
 * Return: Always
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest); /*6*/
	int i;
	/*i= 0 - 1 - 2*/
	/*src[i] = W - o - r*/
	for (i = 0; src[i] != '\0'; i++)
	{
		/*[6+0]=  = W-o*/
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}