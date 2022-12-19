#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of array
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

