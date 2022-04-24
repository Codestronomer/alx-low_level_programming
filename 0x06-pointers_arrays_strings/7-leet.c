#include "main.h"
#include <string.h>

/**
 * leet - Encodes a string into 1337
 * @s - string to be encoded
 * Return: encoded string
*/
char *leet(char *s)
{
int i, j;
char lower_case[] = {'a', 'e', 'o', 't', 'l'};
char upper_case[] = {'A', 'E', 'O', 'T', 'L'};
int encoder[] = {4, 3, 0, 7, 1};
int str_len = strlen(s);

for (i = 0; i < str_len; i++)
{
for (j = 0; j < 6; j++)
{
if ((s[i] == lower_case[j]) || (s[i] == upper_case[j]))
{
s[i] = '0' + encoder[j];
}
}
}

return (s);
}
