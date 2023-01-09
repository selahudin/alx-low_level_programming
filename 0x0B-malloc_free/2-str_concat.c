#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - it is a function that concatenate two strings.
 * @s1: a string that will be concatenate with other string.
 * @s2: it is another string that will be cocncatenate.
 *
 * Return: The function should return NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *plus;

	unsigned int lett1 = 0, lett2 = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	plus = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (plus == NULL)

		return (NULL);

	if (s1)
	{
		for (; lett1 < len1; )
		{
			plus[lett1] = s1[lett1];
			lett1++;
		}
	}

	if (s2)
	{
		while (lett1 < (len1 + len2))
		{
			plus[lett1] = s2[lett2];
			lett1++;
			lett2++;
		}
	}
	plus[lett1] = '\0';
	return (plus);
}
