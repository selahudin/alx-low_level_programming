#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - a function that returns a pointer.
 * to a 2 dimensional array of integers.
 * @width: width of the 2D array.
 * @height: height of the 2d array.
 *
 * Return: The function should return NULL on failure.
 * if width or height is 0 or negative, return NULL.
 */

int **alloc_grid(int width, int height)
{
	int * *matrix;
	
	int s = 0, e = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);
	while (s < height)
	{
		matrix[s] = malloc(sizeof(int) * width);
		if (matrix[s] == NULL)
		{
			free(matrix);
			while (e <= s)
			{
				free(matrix[e]);
				e++;
			}
			return (NULL);
		}
		s++;
	}
	while (s < height)
	{
		while (e < width)
		{
			matrix[s][e] = 0;
		}
		s++;
	}
	return (matrix);
}
