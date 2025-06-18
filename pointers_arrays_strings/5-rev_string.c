#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 *
 * Description: This function reverses
 * the characters in the string pointed to by
 * s. It swaps characters from
 * the beginning and end of the string until it reaches
 * the middle.
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
