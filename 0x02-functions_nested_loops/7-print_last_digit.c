#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n : integer to be used as the argumet of the function
 * Return: the last digit value
 */
int print_last_digit(int n)
{
int i;

i = n % 10;
if (i < 0)
{
_putchar(-i + 48);
return (-i);
}
else
{
_putchar(i + 48);
return (i);
}
}

