#include "main.h"
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	len = sizeof(str);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
