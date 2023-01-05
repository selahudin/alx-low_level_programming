#include "main.h"

int get_sqrt(int square, int root);
int _sqrt_recursion(int n);

/**
 * get_sqrt - the number we will found in the natural square root.
 * @square: it is the natural square root.
 * @root: it is the number what we will find.
 *
 * Return: If n does not have a natural square root.
 * the function should return -1.
 */

int get_sqrt(int square, int root)
{
	if (square < 0)
	{
		return (-1);
	}
	else if ((root * root) > square)
	{
		return (-1);
	}
	if ((root * root) == square)
	{
		return (root);
	}
	return (0);
}
