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
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2] == '/' || argv[2] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);

	return (0);
}
