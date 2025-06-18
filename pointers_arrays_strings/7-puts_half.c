#include "main.h"
/**
 * puts_half - prints the second half of a string followed by a new line
 * @str: the string to print
 *
 * Description: This function prints
 * the second half of the string pointed to by
 * str. If str is NULL or empty, it does nothing.
 */
void puts_half(char *str)
{
	int len = 0, start;

	if (str == NULL)
	{
		return;
	}

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	for (; str[start] != '\0'; start++)
	{
		_putchar(str[start]);
	}

	_putchar('\n');
}
