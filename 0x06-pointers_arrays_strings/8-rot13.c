#include "holberton.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @str: string
 * Return: Always str
 */

char *rot13(char *str)
{
	int len, len2;
	char alph[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (len = 0; str[len] != '\0'; len++)
	{
		for (len2 = 0; alph[len2] != '\0'; len2++)
		{
			if (str[len] == alph[len2])
			{
				str[len] = alph[len2 += 13];
				break;
			}
		}
	}
	return (str);
}
