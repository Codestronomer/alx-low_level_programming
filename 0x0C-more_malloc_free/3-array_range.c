#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer on success, NULL on failure
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}

	return (ptr);
}
