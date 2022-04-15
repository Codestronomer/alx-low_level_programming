#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for checks for a digit(0 through 9)
 * @c : parameter to be checked
 * Return: return 1 if uppercase, 0 if otherwise
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
