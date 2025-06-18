#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: the array to print
 * @n: the number of elements to print
 *
 * Description: This function prints the first n elements of the array
 * pointed to by a, followed by a new line. If a is NULL or n is less than or
 * equal to 0, it does nothing.
 */
void print_array(int *a, int n)
{
	int i;

	if (a == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
