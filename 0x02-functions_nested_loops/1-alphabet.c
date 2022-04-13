#include "main.h"

/**
 * main - prints the alphabets in lowercase
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int a, z = 122;
for(a=97; a<=122; a++)
{
_putchar(a);
}
_putchar('\n');
 return;
}
