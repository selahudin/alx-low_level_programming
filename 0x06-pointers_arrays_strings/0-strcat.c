#include <stdio.h>
#include <string.h>

/**
 * main - it prints concatenates string
 *
 * Return: Always 0
 */

int main(void)
{
	char str1[10] = "selahadin";
	char str2[10] = "meka\n";
	char str3[20];

	strcat(str1, str2);
	printf("strcat(str1, str2): %s\n", str1);

	return (0);
}


