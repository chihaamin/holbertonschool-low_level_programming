#include "dog.h"
/**
 * init_dog - Initiate a dog instance
 * @d: Dog struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
