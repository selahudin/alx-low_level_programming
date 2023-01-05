#include "main.h"

/**
 * factorial - prints a function that returns the factorial of a given number.
 * @n: a number that will be factorized.
 *
 * Return: If n is lower than 0, the function should return -1
 * or the factorial of a given number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
