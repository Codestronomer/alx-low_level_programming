#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: always 0.
 */
void times_table(void)
{
int i, j, num;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
num = i * j;

if (num <= 9)
{
_putchar(num + 48);
_putchar(44);
_putchar(32);
_putchar(32);
}
else
{
_putchar((num / 10) + 48);
_putchar((num % 10) + 48);
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}
