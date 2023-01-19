#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - It is a function that adds(sum).
 * the number which we passed.
 * @n: It is a counter or it is a fixed number.
 *
 * Return: If n == 0, return 0.
 * else return the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list s;

	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}

	va_start(s, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(s, unsigned int);
	}

	va_end(s);

	return (sum);

}
