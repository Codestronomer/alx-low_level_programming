#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer less than, equal to or greater than 0
*/

int *_strcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);

	if (s1[0] < s2[0])
	{
		return (-15);
	}
	else if (s1[0] > s2[0])
	{
		return (15);
	}
	return (0);
}
