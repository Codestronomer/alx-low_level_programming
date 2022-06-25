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

	if (index > 63)
		return (-1);
	
	i = (n >> index) & 1;
	return (i);
}
