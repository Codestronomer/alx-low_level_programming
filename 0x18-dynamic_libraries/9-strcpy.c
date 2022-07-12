#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, to the buffer dest.
 * @dest: buffer
 * @src: pointed to string
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
