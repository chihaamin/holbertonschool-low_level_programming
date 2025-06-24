#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * This function calculates and prints the sums of the two diagonals
 * of a square matrix represented as a one-dimensional array.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
	{
		sum1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sum2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
