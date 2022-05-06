#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: string to be duplicated
 * Return: NULL if str = NULL, pointer to string copy on success
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*(s + i) = str[i];
	}
	*(s + i) = '\0';
	return (s);
}
