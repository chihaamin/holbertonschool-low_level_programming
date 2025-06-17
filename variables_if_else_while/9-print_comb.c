#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	char n;

	for (n = '1'; n <= '9'; n++)
	{
		putchar(n);
		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
