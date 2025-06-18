#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14,
 *                ten times, followed by a new line
 */
void more_numbers(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		}

	_putchar('\n');
}
