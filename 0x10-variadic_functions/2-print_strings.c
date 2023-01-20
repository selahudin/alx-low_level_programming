#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - It is a function that prints a string.
 * followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n:  is the number of strings passed to the function.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;

	unsigned int i;

	char *str;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(s, char*);

		if (!str)
		{
			str = "(nil)";
		else if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(s);
}
