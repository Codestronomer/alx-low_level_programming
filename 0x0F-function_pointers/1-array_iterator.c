#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given
 * as a paraementer on each element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: function to execute on array
 * Return: Always nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
