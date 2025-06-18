#include "main.h"
/**
 * puts2 - prints every other character of a string followed by a new line
 * @str: the string to print
 *
 * Description: This function prints every second character of the string
 * pointed to by str, starting from the first character,
 *  followed by a new line.
 * If str is NULL, it does nothing.
 */
void puts2(char *str)
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
