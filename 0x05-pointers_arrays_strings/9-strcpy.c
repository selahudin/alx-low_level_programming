#include "main.h"

/**
 * _strcpy - function that copies
 * @dest: it is destiny
 * @src: it is copy
 *
 * Return: this return copy
 */

void _strcpy(char *dest, char *src)
{
	char start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
