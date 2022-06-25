#include "main.h"

/**
 * get_endianness - checks the endianness of the
 * underlying architecture
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 0x76504010;
	char *c = (char *) &i;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
