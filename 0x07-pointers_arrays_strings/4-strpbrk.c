#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a string that uses for searching.
 * @accept: it contain a bytes that match in s.
 *
 * Return: Returns a pointer to the byte in s.
 */

char *_strpbrk(char *s, char *accept)
{
	int l = 0, b = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	while (accept[b] != '\0')
		b++;
	if (*s == accept[b])
		return (s);
	return (NULL);
}
