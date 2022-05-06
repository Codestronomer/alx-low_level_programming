#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * of integers
 * @width: width of the array
 * @height: Height of the array
 * Return: NULL on failure and if width or height is 0 or negative
 * pointer to string copy on success
 */

int **alloc_grid(int width, int height)
{
	int *ptr;
	unsigned int i, j;

	if (width == NULL || width == 0)
		return (NULL);
	if (height == NULL || height == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
