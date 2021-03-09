#ifndef DOG_H
#define DOG_H
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

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*HOLBERTON_H*/
