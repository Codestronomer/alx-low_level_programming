#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed
 * into it, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: (0) Success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
