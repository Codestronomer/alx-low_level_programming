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
	int i = 0, res;
	
	while(res == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		res = s1[i] - s2[i];
		i++;
	}

	return (res);
}
