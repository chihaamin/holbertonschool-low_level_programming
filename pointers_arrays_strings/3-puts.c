#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: the string to print
 */
void _puts(char *str)
{
	if (str == NULL)
	{
		return;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
