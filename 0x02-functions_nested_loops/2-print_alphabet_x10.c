#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabets in lowercase
 *
 * Return: always void (Success)
 */
void print_alphabet_x10(void)
{
int a, z = 122;
for (int i = 0; i < 10; i++)
{
for (a = 97; a <= z; a++)
{
_putchar(a);
}
}
_putchar('\n');
return;
}

