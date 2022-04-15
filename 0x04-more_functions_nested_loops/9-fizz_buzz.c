#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - FizzBuzz
 *
 * Return: Always (0) Success
 */

int main (void)
{
int i;

for (i = 0; i < 101; i++)
{
if (i % 3 == 0 && 1 % 5 == 0)
{
putchar('FizzBuzz');
putchar(32);
}
else if (i % 3 == 0)
{
putchar('Fizz');
putchar('Buzz');
}
else if (i % 5 == 0)
{
putchar('Buzz');
putchar(32);
}
else
{
putchar('0' + i);
putchar(32);
}
}
return (0);
}

