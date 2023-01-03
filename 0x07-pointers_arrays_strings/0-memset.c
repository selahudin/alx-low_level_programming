#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a memory that will be filled.
 * @b: a char that copy.
 * @n: number of times to copy b.
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
