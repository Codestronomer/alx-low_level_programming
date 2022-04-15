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
for (i = 48; i < 59; i++)
{
for (j = 48; j < 65; j++)
{
_putchar(j);
}
_putchar('\n');
}
_putchar('\n');
}

