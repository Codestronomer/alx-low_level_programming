#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * @...: variable arguments
 *
 * Return: Always nothing
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *str;
	char *seperator = "";

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", seperator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", seperator, str);
				break;
			default:
				i++;
				continue;
		}
		seperator = ", ";
		i++;
	}
	printf("\n");
}
