#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int se = n % 10;

	if (se < 0)
		se *= -1;

	_putchar(se + '0');

	return (0);
}
