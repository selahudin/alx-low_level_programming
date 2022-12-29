#include "main.h"

/**
 * print_numbers - prints 0 up to 9
 */

void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; )
	{
		_putchar (i + '0');
		i++;
	}
	_putchar ('\n');
}
