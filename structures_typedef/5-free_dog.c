#include "dog.h"
/**
 * free_dog - Free dogs
 * @d: dog instance
 */
void free_dog(dog_t *d)
{
	free(&d);
}
