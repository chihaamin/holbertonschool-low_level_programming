#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of command line arguments.
 * @argv: The program command line arguments.
 * Description: A program that prints the number of arguments passed into it.
 * Return: Always Success (0).
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		/* This condition is to avoid unused parameter warning */
		(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
