#include "main.h"
#include <unistd.h>

int main()
{
int i;
int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
for (i = 0; i < 9; i++)
{ 
_putchar(str[i]);
}
_putchar('\n');
return 0;
}
