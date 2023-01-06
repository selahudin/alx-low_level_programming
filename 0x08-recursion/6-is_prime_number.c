#include "main.h"

/**
 * is_prime_number - it prints a prime number.
 * @n: the number that we tested.
 *
 * Return: returns 1 if the input integer is a prime number.
 * otherwise return 0.
 */

int is_prime_number(int n)
{
	if ((n / n) == 1 && (n / 1) == n && (n > 1))
		return (1);
	return (0);
}
