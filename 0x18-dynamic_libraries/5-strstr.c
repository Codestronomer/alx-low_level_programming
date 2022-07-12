#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: substring
 * Return: a pointer to the beginning of the substring
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
