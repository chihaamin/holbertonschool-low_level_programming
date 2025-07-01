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
	dog_t *newDog;
	char *name_copy, *owner_copy;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(newDog);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(newDog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	newDog->name = name_copy;
	newDog->age = age;
	newDog->owner = owner_copy;

	return (newDog);
}
