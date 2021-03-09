#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to My_dog
 * @name: Name of the pet
 * @age: age of the pet
 * @owner: owner of the pet
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
