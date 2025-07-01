#include "dog.h"
/**
 * print_dog - Prints a dog informations
 * @d: Dog struct instance
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name && printf("Name: %s\n", d->name)) || printf("Name: (nil)\n");

		(d->age && printf("Age: %.6f\n", d->age)) || printf("Age: (nil)\n");

		(d->owner && printf("Owner: %s\n", d->owner)) || printf("Owner: (nil)\n");
	}
}
