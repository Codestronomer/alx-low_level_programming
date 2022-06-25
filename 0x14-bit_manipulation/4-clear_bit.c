#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: number to be converted to binary
 * @index: index of bit to be cleared
 *
 * Return: 1 if successful, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
