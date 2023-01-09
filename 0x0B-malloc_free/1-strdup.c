#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer.
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: it is a string that will be duplicate.
 *
 * Return: Returns NULL if str = NULL.
 * returns a pointer to the duplicated string(success).
 * or t returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *s;

	unsigned int b = 0, l = 0;

	if (str == NULL)

		return (NULL);

	for (; str[b]; )

		b++;

	s = (char *) malloc((b + 1) * sizeof(char));

	if (s == NULL)

		return (NULL);

	while ((s[l] = str[l]) != '\0')

		l++;

	return (s);

}
