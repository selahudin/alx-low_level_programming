#include "main.h"

/**
 * _memcpy - it copies the memory area.
 * @dest: it is the memory area that we store.
 * @src: it is a memory area that we transfer n bytes to dest.
 * @n: number of bytes to copy.
 *
 * Return: Returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int s = 0;

	while (s < n)
	{
		dest[s] = src[s];
		s++;
	}

	return (dest);
}
