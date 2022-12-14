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
	int l, i;

	for (l = 0; *s != '\0'; l++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
