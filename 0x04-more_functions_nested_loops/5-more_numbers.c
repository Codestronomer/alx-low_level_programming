#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * most_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always (0)
 */

void most_numbers(void)
{
int i, j;
for (i = 0; i < 11; i++)
{
for (j = 0; j < 15; j++)
{
_putchar('0' + j);
}
}
_putchar('\n');
}

