#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of underscores to be printed.
 *
 * Description: If n is 0 or less, it prints only a newline character.
 * Otherwise, it prints n underscores followed by a newline.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
