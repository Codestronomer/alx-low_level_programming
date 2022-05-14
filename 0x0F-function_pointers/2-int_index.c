#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer in an array
 * @array: array of integeers
 * @size: number of elements in the array
 * @cmp: fnction to be used to compare values
 * Return: index of the first element for cmp returns !0
 * return -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			res = cmp(array[i]);
			if (res != 0)
				return (i);
		}
	}
	return (-1);
}
