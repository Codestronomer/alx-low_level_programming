#include "main.h"
#include <limits.h>

/**
 * get_bit - returns the value of a bit
 * at a given index
 * @n: number to be converted
 * @index: inndex of bit
 *
 * Return: value of bit at index, -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	char *bin;

	bin = malloc(sizeof(char) * INT_MAX);
	if (bin == NULL)
	{
		free(bin);
		return (-1);
	}

	while (n >> 0)
	{
		if (n >> 1)
			bin[i] = (n & 1) + '0';
		n = n >> 1;
	}
	return (bin[index]);
}
