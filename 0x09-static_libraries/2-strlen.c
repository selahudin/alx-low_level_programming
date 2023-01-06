#include "main.h"

/**
 * _strlen - function that return
 * @s: this is the input string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
		;
	return (i);
}
