#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: Width of grid
 * @height: height of grid
 *
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i = 0;
	int j = 0;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	while (i < height)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			while (i >= 0)
			{
				free(ar[i]);
				i--;
			}
			free(ar);
			return (NULL);
		}
		i++;
	}
	while (i < height)
	{
		while( k < width)
		{
		    ar[j][k] = 0;
		    k++;
		}
		j++;
	}
	return (ar);
}
