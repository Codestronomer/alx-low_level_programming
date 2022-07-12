#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b[100];

	for (i = 0; i < n; i++)
	{
		b[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
