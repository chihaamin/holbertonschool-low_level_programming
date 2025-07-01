
#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Dog struct and type as dog_t
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: A dog basic informations
 */
typedef struct dog
{
	float age;

	char *name;

	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
