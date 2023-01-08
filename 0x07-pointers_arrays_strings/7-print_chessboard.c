#include "main.h"

/**
 * print_chessboard - It is a function that prints the chessboard.
 * @a: it is a two dimension array to print.
 *
 */

void print_chessboard(char (*a)[8])
{
	int l, w;

	for (l = 0; l < 8; l++)
	{
		for (w = 0; w < 8; w++)
		{
			_putchar(a[l][w]);
		}
		_putchar('\n');
	}
}
