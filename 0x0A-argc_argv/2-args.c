#include <stdio.h>
#include "main.h"

/**
 * main - it is a program that prints all arguments it receives.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int l = 0;

	for (; l < argc; l++)

	printf("%s\n", argv[l]);

	return (0);
}
