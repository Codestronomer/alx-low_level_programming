#include "main.h"

/**
 * swap_int - takes two pointers and swaps its values.
 * @a: input integer.
 * @b: input integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
