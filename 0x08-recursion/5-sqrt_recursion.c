#include "main.h"

int find_sqrt(int square, int root);

/**
 * _sqrt_recursion - function that return a natural square root of number.
 * @n: a natural square root number.
 *
 * Return: the result of the square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - the number we will found in the natural square root.
 * @square: it is the natural square root.
 * @root: it is the number what we will find.
 *
 * Return: If n does not have a natural square root.
 * the function should return -1.
 */

int find_sqrt(int square, int root)
{
	if ((root * root) > square)
		return (-1);
	if ((root * root) == square)
		return (root);
	return (find_sqrt(square, root + 1));
}
