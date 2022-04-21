#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string, in reverse, followed by a new line.
 * @str: input string.
 * Return: no Return.
 */
void print_rev(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
