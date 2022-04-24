#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: returns uppercase string
*/

char *string_toupper(char *s)
{
int i;
int s_len = strlen(s);

for (i = 0; i < s_len; i++)
{
if (s[i] > 96 && s[i] < 123)
{
s[i] = *(s + i) - 32;
}
}

return (s);
}
