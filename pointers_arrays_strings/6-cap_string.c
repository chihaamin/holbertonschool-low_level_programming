#include "main.h"
/**
 * *cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 * * Return: Pointer to the resulting string s
 */
char *cap_string(char *s)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";
	int is_separator = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_separator && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			is_separator = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				 s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				 s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				 s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				 s[i] == '}')
		{
			is_separator = 1;
		}
		else
		{
			is_separator = 0;
		}
	}
	return (s);
}
