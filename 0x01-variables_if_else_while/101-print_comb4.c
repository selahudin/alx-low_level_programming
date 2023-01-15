#include <stdio.h>

/**
 * main - it prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones, tens, hundred;

	for (ones = 48; ones < 58; ones++)
	{
		for (tens = 49; tens < 58; tens++)
		{
			for (hundred = 50; hundred < 58; hundred++)
			{
				if (hundred > tens && tens > ones)
				{
					putchar(ones);
					putchar(tens);
					putchar(hundred);
					if (ones != 55 || tens != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
