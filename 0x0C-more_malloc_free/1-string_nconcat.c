#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concat
 * Return: a pointer containing concatenated string
 * Null if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *ptr;
	unsigned int ls1, ls2, lsout;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	len = ls1 + n;
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		if (i < ls1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - ls1];
	}

	ptr[i] = '\0';

	return (ptr);
}
