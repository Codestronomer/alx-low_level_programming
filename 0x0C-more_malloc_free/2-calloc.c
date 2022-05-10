#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alllocates memory for an array.
 * using malloc
 * @nmemb: initialize array with nmemb
 * @size: bytes of memory to allocate
 * Return: NULL on failure, pointer on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	if (!size || !nmemb)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = nmemb;
	}

	return (ptr);
}
