#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest - destination string
 * @src - source string
 * @n - number of bytes from src
 * Return: A pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
    int i;
    int dest_len = strlen(dest);

    for (i = 0; i < n; i++)
        dest[i] = *(src + i);
    dest[dest_len + i] = '\n';

    return (dest);
}
