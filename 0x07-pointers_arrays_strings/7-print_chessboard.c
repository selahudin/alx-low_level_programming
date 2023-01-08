#include "main.h"

/**
 * print_chessboard - It is a function that prints the chessboard.
 * @a: it is a two dimension array to print.
 *
 */

void print_chessboard(char (*a)[8])
{
	int length = 0, width = 0;

	while (length < 8)
	{
		while (width < 8)
		{
			_putchar(a[length][width]);
			width++;
		}
		_putchar('\n');
		length++;
	}
}
