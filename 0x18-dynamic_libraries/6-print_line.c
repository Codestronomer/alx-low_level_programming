#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: number of times to print the _ chararacter
 * Return: Always (0)
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}

