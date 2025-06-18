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
	int length = 0, i;

	if (str == NULL)
	{
		return;
	}

	while (str[length] != '\0')
	{
		length++;
	}

	if (length == 0)
	{
		return;
	}

	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
