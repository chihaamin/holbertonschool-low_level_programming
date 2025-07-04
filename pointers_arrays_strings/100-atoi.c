#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert.
 * Return: the converted integer.
 *
 * This function handles optional leading whitespace, an optional sign
 * ('-' for negative), and digits. It stops converting when it encounters
 * a non-digit character after starting to convert.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}

	return (sign * num);
}
