#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - It is a function that prints a number.
 * followed by a new line.
 * @n: It is a counter or a fixed number.
 * @separator: is the string to be printed between numbers.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list s;

	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(s, unsigned int));
		}
		else if (separator  && i == 0)
		{
			printf("%d", va_arg(s, unsigned int));
		}
		else
		{
			printf("%s%d", separator, va_arg(s, unsigned int));
		}
	}

	va_end(s);
	printf("\n");
}
