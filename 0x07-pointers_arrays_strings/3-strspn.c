#include "main.h"

/**
 * *_strspn -  a function that gets the length of a prefix substring.
 * @s: a sring that can be evaluated.
 * @accept: it contain list of character.
 *
 * Return: Returns the number of bytes in the initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	 int m = 0, e = 0, k = 0, a = 0;

	while (s[m] != '\0')
		m++;
	while (accept[e] != '\0')
		e++;
	if (s[m] == accept[e])
	{
		k++;
		a = 1;
	}
	if (a == 0)
		return (k);
	return (0);
}
