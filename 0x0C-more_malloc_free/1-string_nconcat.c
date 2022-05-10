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

	len = strlen(s1) + n + 1;
	ptr = malloc(len);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
