#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c : character to check the case
 * Return: 1 if lower (true). 0 if (otherwise) upper
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
return (0);
}

