#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: a pointer to the 1st occurence of c
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
