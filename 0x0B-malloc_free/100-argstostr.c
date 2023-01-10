#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - a function that concatenates all the arguments.
 * @ac: it is argument counter.
 * @av: it is a pointer of.
 *
 * Return: Returns a pointer to a new string, or NULL if it fails.
 * Returns NULL if ac == 0 or av == NULL.
 */

char *argstostr(int ac, char **av)
{
	char *arg;

	int a = 0, b = 0, c = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			size++;
			b++;
		}
		size++;
		a++;
	}

	arg = malloc((sizeof(char) * size) + 1);

	if (arg == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;

		while (av[a][b])
		{
			arg[c] = av[a][b];
			b++;
			c++;
		}
		arg[c] = '\n';
		c++;
		a++;
	}
	arg[c] = '\0';
	return (arg);
}
