#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
int i;
int dest_len = strlen(dest);
int src_len = strlen(src);

for (i = 0; i < src_len && src[i] != '\0'; i++)
{
dest[dest_len + i] = *(src + i);
}
dest[dest_len + i] = '\0';

return (dest);
}
