#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str);

/**
 * new_dog - function that creates a new dog.
 * @name: me of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs;

	if (name == NULL || owner == NULL)
		return (NULL);
	dogs = malloc(sizeof(dog_t));
	if (dogs == NULL)
		return (NULL);
	dogs->name = _strdup(name);
	if (dogs->name == NULL)
	{
		free(dogs);
		return (NULL);
	}
	dogs->owner = _strdup(owner);
	if (dogs->owner == NULL)
	{
		free(dogs->name);
		free(dogs);
		return (NULL);
	}
	dogs->age = age;

	return (dogs);
}

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: Char.
 */
char *_strdup(char *str)
{
	char *a, *aux;
	int l;

	if (str == NULL)
		return (NULL);
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	a = malloc(sizeof(char) * (l + 1));
	if (a == NULL)
		return (NULL);
	aux = a;
	while (*str != '\0')
	{
		*aux = *str;
		aux++;
		str++;
	}
	*aux = '\0';
	return (a);
}
