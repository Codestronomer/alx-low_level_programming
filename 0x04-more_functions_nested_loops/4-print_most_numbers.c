#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: Always (0)
 */

void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if (i == 2 || i == 4)
{
continue;
}
else
{
_putchar('0' + i);
i++;
}
}
_putchar('\n');
}
