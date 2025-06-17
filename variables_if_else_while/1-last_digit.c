#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int lastInt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastInt = n % 10;
	if (lastInt == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	} else if (lastInt < 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastInt);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastInt);
	}
	return (0);
}
