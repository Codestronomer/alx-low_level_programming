#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dot_t;

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
