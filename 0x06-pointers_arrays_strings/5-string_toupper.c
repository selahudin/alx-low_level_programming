#include "main.h"

/**
 * string_toupper - it changes lo to up
 * @str: parameter
 * Return: returns
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
