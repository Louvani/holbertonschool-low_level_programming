#include "holberton.h"
#include <stdio.h>

int count_words(char *phrase);

/**
 * strtow  - 
 */
char **strtow(char *str)
{
	char **a;
	int n_words;

	n_words = count_words(str);
	printf("%d\n", n_words);

	a = malloc(n_words * sizeof( char *));
	if (a == NULL)
		return (NULL);
	for 
 	return (a);
}

int count_words(char *phrase)
{
	int count;

	while (*phrase != '\0')
	{
		count++;
		*(phrase + 1);
	}
	count++;
	return (count);
}

int word_len(char *phrase)
{
	int count;

	while (*phrase != '\0')
	{
		count++;
		*(phrase + 1);
	}
	count++;
	return (count);
}