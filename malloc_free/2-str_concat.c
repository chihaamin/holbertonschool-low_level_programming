#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space in memory
 * containing the concatenated string, or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j, len1 = (sizeof(s1) - 1), len2 = (sizeof(s2) - 1);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
