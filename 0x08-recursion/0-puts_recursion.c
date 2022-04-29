#include <stdio.h>

/**
 * _puts_recursion - prints a string,
 * followed by a new line
 * @s: string
 * Return: Always nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s[i + 1]);
	}
	_putchar('\n')
}
