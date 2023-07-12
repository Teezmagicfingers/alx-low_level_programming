#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int c, v;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		g[c] = malloc(sizeof(int) * width);

		if (g[c] == NULL)
		{
			for (; c >= 0; c--)
				free(g[c]);

			free(g);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (v = 0; v < width; v++)
			g[c][v] = 0;
	}

	return (g);
}
