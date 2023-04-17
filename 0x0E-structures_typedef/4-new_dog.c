#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i, lname, lowner;

	ptr_dog = malloc(sizeof(*ptr_dog));
	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}
	lname = 0;
	while (name[lname])
	{
		lname++;
	}
	lowner = 0;
	while (owner[lowner])
	{
		lowner++;
	}
	ptr_dog->name = malloc(lname + 1);
	ptr_dog->owner = malloc(lowner + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}
	i = 0;
	while (i < lname)
	{
		ptr_dog->name[i] = name[i];
		i++;
	}
	ptr_dog->name[i] = '\0';
	ptr_dog->age = age;

	for (i = 0; i < lowner; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';

	return (ptr_dog);
}
