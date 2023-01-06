#include "main.h"

/**
 * _isdigit - it checks the input is a character or a number
 * @c: the character
 *
 * Return: if the input is a digit return 1
 * if the input is a character or other input 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
