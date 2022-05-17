#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable arguments
 *
 * Return: Always Nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (seperator == NULL)
		seperator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}

