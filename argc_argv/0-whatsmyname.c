#include "main.h"
/**
 * main - Entry point.
 * @argc: The number of command line arguments.
 * @argv: The program command line arguments.
 * Description: A program that prints the name of the program>
 * Return: Always Success (0).
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		/* This condition is to avoid unused parameter warning */
		(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
