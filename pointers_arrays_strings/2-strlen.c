#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string
 *
 * Description: This function computes the length of the string pointed to by
 * s, excluding the null terminator. If s is NULL, it returns 0.
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (s[length] != '\0')
		{
			length++;
		}
	}

	return (length);
}
