#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d, e, f;

for (d = 0; d < 8; d++)
{
for (e = d + 1; e < 9; e++)
{
for (f = e + 1; f < 10; f++)
{
putchar((d % 10) + '0');
putchar((e % 10) + '0');
putchar((f % 10) + '0');
if (d == 7 && e == 8 && f == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
