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
	int i = strlen(*str);

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i--;
	}
}
