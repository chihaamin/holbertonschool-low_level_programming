#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to print in reverse
 *
 * Description: This function prints the characters of the string pointed to by
 * s in reverse order, followed by a new line. If s is NULL, it does nothing.
 */
void print_rev(char *s)
{
	int length = 0;

	if (s == NULL)
	{
		return;
	}

	while (s[length] != '\0')
	{
		length++;
	}

	for (length--; length >= 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
