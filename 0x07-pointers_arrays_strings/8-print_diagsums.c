#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - it is a function that prints the sum of the two diagonals.
 * of a square matrix of integers.
 * @a: it is the square matrix that we will print the sum.
 * of the square of matrix.
 * @size: it is the size of the matrix that we will get from input.
 */

void print_diagsums(int *a, int size)
{
	int index = 0;

	unsigned int sum1 = 0;

	unsigned int sum2 = 0;

	while (index < size)
	{
		sum1 = sum1 + a[(size * index) + index];
		sum2 = sum2 + a[(size * (index + 1)) - (index + 1)];
		index++;
	}

	printf("%d, %d\n", sum1, sum2);
}
