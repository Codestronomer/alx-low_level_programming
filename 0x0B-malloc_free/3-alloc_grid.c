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
	int **ptr;
	int i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
