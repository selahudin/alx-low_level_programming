#include <stdio.h>

/**
 * main - prints all posible different combination of two digits
 *
 * Return: Always (success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/* eliminate repites*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* addes coma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

