#include "main.h"
/**
 * *string_toupper - Converts all lowercase letters of a string to uppercase
 * @s: The string to be converted
 * * Return: Pointer to the converted string
 * This function iterates through each character of the string,
 * checking if it is a lowercase letter. If it is, the character is
 * converted to uppercase by subtracting 32 from its ASCII value.
 * The function returns the pointer to the modified string.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
