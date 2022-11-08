#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Width of grid
 * @height: height of grid
 * Return: NULL on failure, NULL if @width or @height is 0 or negative,
 * on success: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			while (i >= 0)
			{
				free(x[i]);
				i--;
			}
			free(x);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			x[j][k] = 0;
		}
	}
	return (x);
}
