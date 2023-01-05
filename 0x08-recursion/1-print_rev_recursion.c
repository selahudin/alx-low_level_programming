#include "main.h"

/**
 * _print_rev_recursion - it is a function that prints a string in reverse.
 * @s: it is a string that will be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
}
