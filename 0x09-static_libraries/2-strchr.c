#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string.
 * @s: The string use to search.
 * @c: The character that will be searched.
 *
 * Return: Returns a pointer:wq
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
