#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 */
void more_numbers(void)
{
	int a =, b = 0;

	for (; a < 10; a++)
	{
		for (; b < 15; b++)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
	}
}
