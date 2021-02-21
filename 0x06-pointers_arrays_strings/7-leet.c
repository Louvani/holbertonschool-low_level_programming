#include "holberton.h"

/**
 * *leet - function that encodes a string into 1337
 * @str: variable
 * Return: Always str.
 */
char *leet(char *str)
{
	int len, len2;
	char alph[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (len = 0; str[len] != '\0'; len++)
	{
		for (len2 = 0; alph[len2] != '\0'; len2++)
		{
			if (str[len] == alph[len2])
			{
				str[len] = num[len2];
			}
		}
	}
	return (str);
}