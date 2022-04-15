#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return: Always (0) Success
 */

int main(void)
{
int i;

i = 1;
_putchar('0' + i);
_putchar(32);
for (i = 2; i < 101; i++)
{
if ((i % 3 == 0) && (1 % 5 == 0))
{
_putchar('FizzBuzz');
_putchar(32);
}
else if (i % 3 == 0)
{
_putchar('Fizz');
_putchar('Buzz');
}
else if (i % 5 == 0)
{
_putchar('Buzz');
_putchar(32);
}
else
{
_putchar('0' + i);
_putchar(32);
}
}
return (0);
}

