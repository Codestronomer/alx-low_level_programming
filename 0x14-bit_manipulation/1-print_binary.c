#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number
 * @n: number to be converted to binary
 *
 * Return: always Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		if ((n & 1) == 0)
			_putchar('0');
		else
			_putchar('1');
		n = n >> 1;
	}
}
