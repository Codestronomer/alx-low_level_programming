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

	if (!size || !nmemb)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
