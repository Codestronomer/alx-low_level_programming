#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
	else
		return (count);
}
