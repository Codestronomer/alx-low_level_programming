#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments passed
 * into it, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
