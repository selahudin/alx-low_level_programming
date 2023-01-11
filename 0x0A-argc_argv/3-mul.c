#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - it is a program that multiplies two numbers.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 1(Error), or 0(success).
 */

int main(int argc, char *argv[])
{
	int num = 1, mul = 1;

	if (argc >= 4 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		for (; num < 3; num++)
		{
			mul = mul * atoi(argv[num]);
		}

		printf("%d\n", mul);
	}

	return (0);
}
