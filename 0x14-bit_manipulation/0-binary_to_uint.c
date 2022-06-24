#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary to be converted
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
