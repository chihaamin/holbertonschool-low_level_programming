#include "dog.h"
/**
 * free_dog - Free dogs
 * @d: dog instance
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
