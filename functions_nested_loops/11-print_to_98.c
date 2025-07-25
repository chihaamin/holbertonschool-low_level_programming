#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *               followed by a new line.
 * @n: the starting number
 *
 *  Description: If n is greater than 98, prints numbers
 *               in descending order. If n is less than 98,
 *               prints numbers in ascending order.
 *               If n is equal to 98, prints 98 followed by a new line.
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
