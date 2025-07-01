#include "main.h"
/**
 * array_range - Creates an array of integers containing all the values
 * from min to max, inclusive.
 * @min: The minimum value in the range.
 * @max: The maximum value in the range.
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
