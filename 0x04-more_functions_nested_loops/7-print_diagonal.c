#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to print the \ chararacter
 * Return: Always (0)
 */

 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}


