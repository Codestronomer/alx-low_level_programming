#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string, followed by a new line.
 * @str: input string.
 * Return: no Return.
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if(str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
