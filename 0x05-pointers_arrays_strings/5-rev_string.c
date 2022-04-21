#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no Return.
 */
void rev_string(char *s)
{
	char temp;
	int i;
	int len = 0;
	int len1 = 0;

	while (s[len] == '\0')
	{
		len++;
	}
	len1 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len1];
		s[len1--] = temp;
	}
}
