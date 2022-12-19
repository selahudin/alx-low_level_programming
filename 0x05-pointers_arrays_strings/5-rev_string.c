#include "main.h"

/**
 * rev_string - reverse the string.
 * @s: pointer to string
 * Return: void.
 */

void rev_string(char *s)
{
	int a, b, c, temp;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
		temp = s[c];
		s[c] = s[b];
		s[b] = temp;
		c++;
		b--;
	}
}
