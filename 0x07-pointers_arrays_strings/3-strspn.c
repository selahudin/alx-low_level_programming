#include "main.h"

/**
 * *_strspn - it gets the length of a prefix substring that is we want to.
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, d;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		d = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
		{
			return (c);
		}
	}

	return (0);
}
