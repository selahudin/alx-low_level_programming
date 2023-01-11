#include <stdio.h>
#include "main.h"

/**
 * main - it is a program that prints the number of arguments passed into it.
 * @argc: it is an argument that will be count.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
