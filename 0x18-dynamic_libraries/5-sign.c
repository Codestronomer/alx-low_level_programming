#include "main.h"
#include <stdio.h>

/**
 * print_sign - print the sign of a number
 * @n : number to check the sign
 * Return: 1 if positive (true). 0 if equal to 0, -1 if negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
if (n == 0)
{
_putchar(48);
return (0);
}
_putchar(45);
return (-1);
}

