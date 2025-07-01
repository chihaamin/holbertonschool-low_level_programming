
#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Dog struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: A dog basic informations
 */

struct dog
{
	float age;

	char *name;

	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
