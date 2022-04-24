#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalize all words in a string
 * @s: string
 * Return: string
*/

char *cap_string(char *s)
{
int i, j;
char sep[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 13; j++)
{
if (s[i] == sep[j])
{
if (s[i + 1] > 96 && s[i + 1] < 123)
{
s[i + 1] = *(s + i + 1) - 32;
}
}
}
}

return (s);
}
