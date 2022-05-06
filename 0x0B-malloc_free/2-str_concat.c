#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space
 * in memory with concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	unsigned int sum;
	char *con_str;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		S2 = '';

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	sum = i + j;
	con_str = (char *)malloc(sizeof(char) * sum);

	if (con_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		con_str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		con_str[i + j] = s2[j];
	con_str[i + j] = '\0';

	return (con_str);
}
