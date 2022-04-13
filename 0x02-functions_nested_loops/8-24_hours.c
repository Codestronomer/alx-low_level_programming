#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: always 0.
 */
void jack_bauer(void)
{
int h1, h2, m1, m2;

h2 = 0;
while (h2 <= 2)
{
h1 = 0;
while (h1 <= 3)
{
m2 = 0;
while (m2 <= 5)
{
m1 = 0;
while (m1 <= 9)
{
_putchar('0' + h2);
_putchar('0' + h1);
_putchar(':');
_putchar('0' + m2);
_putchar('0' + m1);
_putchar('\n');
m1++;
}
m2++;
}
h1++;
}
h2++;
}
}

