#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: strings
 * @accept: bytes
 * Return: Number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
