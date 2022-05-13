#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Null on failure, return dog on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, sname, sowner;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}
	for (sname = 0; name[sname]; sname++)
		;

	for (sowner = 0; owner[sowner]; sowner++)
		;

	ptr->name = malloc(sname + 1);
	ptr->owner = malloc(sname + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < sname; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < sowner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	return (ptr);
}
