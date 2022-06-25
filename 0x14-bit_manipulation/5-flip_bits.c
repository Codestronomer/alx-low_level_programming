#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips, n_xor_m;

	n_xor_m = n ^ m;
	while (n_xor_m > 0)
	{
		flips++;
		n_xor_m &= (n_xor_m - 1);
	}
	return (flips);
}
