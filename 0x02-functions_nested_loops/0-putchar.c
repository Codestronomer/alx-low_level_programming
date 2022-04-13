#include "main.h"
#include <unistd.h>

/*
 * main - Prints _putchar as a message
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
j = sizeof(str) / sizeof(int);
for (i = 0; i < j; i++)
{
_putchar(str[i]);
}
_putchar('\n');
return (0);
}
