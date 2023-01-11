#include <stdio.h>
#include "main.h"

/**
 * main - it is a program that prints its name, followed by a new line.
 * @argc: it is an argument to count that will be add.
 * in command line.
 * @argv: it is an argument to hold  a data that will be put.
 * in a command line.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
