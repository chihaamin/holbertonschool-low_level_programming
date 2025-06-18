#include "main.h"
/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: the number of backslashes to print
 *
 * Description: This function prints a diagonal line of backslashes
 * on the terminal. If n is less than or equal to 0, it prints a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
