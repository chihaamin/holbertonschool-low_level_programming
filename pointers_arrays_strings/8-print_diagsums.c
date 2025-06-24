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
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];

		_putchar(sum1 + '0');
		_putchar(',');
		_putchar(' ');
		_putchar(sum2 + '0');
	}
	_putchar('\n');
}
