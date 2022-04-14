#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c : parameter to be checked
 * Return: return 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
