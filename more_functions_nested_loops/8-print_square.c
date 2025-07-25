#include "main.h"
/**
 * print_square - prints a square of size 'size'
 * @size: the size of the square
 *
 * Description: This function prints a square made of '#' characters.
 * If 'size' is less than or equal to 0, it prints a new line.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
