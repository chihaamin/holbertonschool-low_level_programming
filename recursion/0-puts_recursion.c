#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * This function prints a string recursively, character by character,
 * and adds a new line at the end.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
