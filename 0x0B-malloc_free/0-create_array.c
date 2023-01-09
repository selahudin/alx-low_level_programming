#include "main.h"
#include <stdlib.h>

/**
 * *create_array - it creates an array of chars,
 * and initializes it with a specific char.
 * @size: it is the size of the array that we need to create.
 * @c: it is a char ti init the array.
 *
 * Return: Returns NULL if size = 0.
 * Returns a pointer to the array (if it is success).
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int l = 0;

	if (size == 0)

		return (NULL);

	s = (char *) malloc(size * sizeof(char));

	if (s == 0)

		return (NULL);

	for (; l < size; )
	{
		*(s + l) = c;
		l++;
	}

	*(s + l) = '\0';

	return (s);

}
