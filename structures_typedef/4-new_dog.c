#include "dog.h"
/**
 * new_dog - Create new instance of the struct dog with type dog_t.
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog Owner
 *
 * Return: Pointer to the new dog instance, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *newDog;
	char *name_copy, *owner_copy;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(name));
	if (name_copy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	owner_copy = malloc(sizeof(owner));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(newDog);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		owner_copy[j] = owner[j];
	owner_copy[j] = '\0';

	newDog->name = name_copy;
	newDog->age = age;
	newDog->owner = owner_copy;

	return (newDog);
}
