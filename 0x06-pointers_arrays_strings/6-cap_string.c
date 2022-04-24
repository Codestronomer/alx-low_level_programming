#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalize all words in a string
 * @s: string
 * Return: string
*/

char *cap_string(char *s)
{
int i = 0, j = 0;
int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
  
if (*(s + i) >= 97 && *(s + i) <= 122)
{
*(s + i) = *(s + i) - 32;
}
i++;

for ( ; s[i] != '\0'; i++)
{
for (j = 0; j < 13; j++)
{
if (s[i] == sep[j])
{
if (*(s + i) >= 97 && *(s + i) <= 122)
{
s[i + 1] = *(s + i + 1) - 32;
}
}
}
}

return (s);
}
