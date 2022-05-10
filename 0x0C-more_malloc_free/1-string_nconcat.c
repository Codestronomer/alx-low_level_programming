#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concat
 * Return: a pointer containing concatenated string
 * Null if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	unsigned int i, j, len;
	char *ptr;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = strlen(s1) + n;
	ptr = malloc(len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n <= strlen(s2))
	{
		n = strlen(s2);
	}

	for (i = 0; i < len; i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - strlen(s1)]
	}

	ptr[i] = '\0';

	return (ptr);
}
