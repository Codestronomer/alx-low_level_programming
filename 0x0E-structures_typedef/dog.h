#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure with elements of a dog
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dot_t *d);

#endif
