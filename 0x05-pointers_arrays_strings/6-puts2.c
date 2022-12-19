#include "main.h"

/**
 * puts2 - print string
 * @str: this is a string
 * Return: void
 */

void puts2(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
		s++;
	}
	_putchar('\n');
}

