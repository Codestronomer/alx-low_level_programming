#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: variable arguments
 *
 * Return: Always Nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	if (seperator == NULL)
		seperator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}

