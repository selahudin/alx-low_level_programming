#include "main.h"

/**
 * _print_rev_recursion - it is a function that prints a string in reverse.
 * @s: it is a string that will be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
