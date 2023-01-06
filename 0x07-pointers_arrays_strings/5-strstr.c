#include "main.h"
#include <stdio.h>

/**
 * *_strstr - lt ocates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{

	int a, b;


	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needleb[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
