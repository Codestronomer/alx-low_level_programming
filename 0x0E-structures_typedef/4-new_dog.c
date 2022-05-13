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
	struct dog *ptr;
	int i, sname, sowner;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!(name) || !(owner))
		return (NULL);
	for (sname = 0; name[sname] != '\0'; sname++)
		;
	for (sowner = 0; owner[sowner] != '\0'; sowner++)
		;
	ptr->name = malloc(sizeof(char) * (sname + 1));
	if (!ptr->name)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (sname + 1));
	if (!ptr->owner)
	{
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
