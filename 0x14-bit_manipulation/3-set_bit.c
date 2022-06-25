#include "main.h"

/**
 * set_bit - sets the value of a bit
 * to 1 at a given index
 * @n: number to be converted
 * @index: index of bit to be set
 *
 * Return: 1 if successful, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
