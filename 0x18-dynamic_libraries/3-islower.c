#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 * @c : character to check the case
 * Return: 1 if lower (true). 0 if (otherwise) upper
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}

