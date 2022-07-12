#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src
 * Return: the pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = *(src + i);
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
