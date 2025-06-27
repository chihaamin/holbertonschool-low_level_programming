#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of command line arguments.
 * @argv: The program command line arguments.
 * Description: A program that prints all arguments it receives.
 * Return: Always Success (0).
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
		(void)argc;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
