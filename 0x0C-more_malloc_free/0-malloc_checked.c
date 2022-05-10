#include "main.h"
#include <stdio.h>


/**
 * malloc_checked - allocates memory using malloc
 * @b: Amount of memory bytes to be allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

