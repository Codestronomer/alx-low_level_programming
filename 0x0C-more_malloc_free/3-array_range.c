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
	char *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(max);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < max; i++)
	{
		ptr[i] = min;
		min++;
		if (min == max)
			break;
	}

	return (ptr);
}
