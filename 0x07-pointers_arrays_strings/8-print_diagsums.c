#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prinsts the sum of diagonals
 * @a: array
 * @size: size of the array
 * Return: Always nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum = 0;
	unsigned int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
