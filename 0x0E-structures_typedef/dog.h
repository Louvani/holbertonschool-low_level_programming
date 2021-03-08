#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - data of pets
 * @name: Name of the pet
 * @age: the age of the pet
 * @owner: TThe name of the owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*HOLBERTON_H*/
