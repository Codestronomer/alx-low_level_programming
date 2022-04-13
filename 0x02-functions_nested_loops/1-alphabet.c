#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
int a, z = 122;
for(a = 97; a <= z; a++)
{
_putchar(a);
}
_putchar('\n');
 return;
}
