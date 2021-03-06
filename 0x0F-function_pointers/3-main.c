#include "3-calc.h"
#include <stdlib.h>

/**
 * main - calculator
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int res, a, b;
	char k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	k = *argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((k == '/' || k == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	if ((*argv[2] != '+' &&
		*argv[2] != '-' &&
		*argv[2] != '/' &&
		*argv[2] != '*' &&
		*argv[2] != '%')
		|| argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	func = get_op_func(argv[2]);

	res = func(a, b);

	printf("%d\n", res);

	return (0);
}
