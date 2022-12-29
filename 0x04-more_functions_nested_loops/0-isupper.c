#include "main.h"

/**
 * _isupper - it checks the upper case character
 * @c: the character which we used for checking
 *
 * Return: if the letter is upper case return 1
 * if the letter is lower case return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
