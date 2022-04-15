#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * 
 * Return: Always (0) 
 */

void print_numbers(void)
{
int i = 0;
while(i < 10)
{
_putchar('0' + i);
i++;
}
_putchar('\n');
}
