#include <stdio.h>

/**
 * printStartup - function executed before main
 * Return: no return.
 */

void printStartup(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore house upon my back!\n");
}
