#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: the destination buffer to copy the string to
 * @src: the source string to copy from
 * Return: a pointer to the destination string dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
