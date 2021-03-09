#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: me of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *woof;

	woof = malloc(sizeof(dog_t));
	if (woof == NULL)
		return (NULL);

	woof->name = name;
	woof->age = age;
	woof->owner = owner;

	return (woof);
}
