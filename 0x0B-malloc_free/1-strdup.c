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
	char *stro;
	unsigned int i;
	unsigned int len = strlen(str);

	if (str == NULL)
		return (NULL);

	stro = (char *)malloc(sizeof(char) * len);

	if (stro == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(stro + i) = str[i];
	}
	return (stro);
}
