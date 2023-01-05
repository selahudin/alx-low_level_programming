#include "main.h"
#include <string.h>

/**
 * _strlen_recursion -  prints a function that returns the length of a string.
 * @s: it is the string that will be print it's length.
 *
 * Return: it will return length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
