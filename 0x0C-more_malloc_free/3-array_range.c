#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing a range of values
 * @min: The minimum value in the range (inclusive)
 * @max: The maximum value in the range (inclusive)
 *
 * Return: Pointer to the allocated array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
