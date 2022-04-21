#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string.
 * Return: no Return.
 */
void puts_half(char *str)
{
	int i = 0; j

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		if (i % 2 == 1)
			j = i / 2;
		else
			j = (i - 1) / 2;
		for (j++; j < i; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
}
