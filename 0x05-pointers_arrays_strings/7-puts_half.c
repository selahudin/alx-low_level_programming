#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the input string
 */

void puts_half(char *str)
{
	int i, h;

	i = 0;
	while (str[i] != '\0')
		i++;

	h = i / 2;

	if (i % 2 == 1)
		h++;

	while (h < i)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
