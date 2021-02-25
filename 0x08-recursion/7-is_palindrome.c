#include "holberton.h"

int comp_char(char *str1, char *str2);

/**
 * is_palindrome - function that returns 1 if the input is a prime number.
 * @s: string to check if is or not a palindrome string.
 * Return: 1 if is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *cpy1 = s;
	char *cpy2 = s + (len - 1);

	if (len == 0)
	{
		return (1);
	}
	return (comp_char(cpy1, cpy2));
}

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: String
 * Return: nothing.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * comp_char - function that returns the length of a string.
 * @str1: String
 * @str2: String in revers to compare
 * Return: 0 if is not palindrome, 1 if is palindrome.
 */

int comp_char(char *str1, char *str2)
{
	if (*str1 != *str2)
	{
		return (0);
	}
	if (str1 >= str2)
	{
		return (1);
	}
	return (comp_char(str1 + 1, str2 - 1));
}
