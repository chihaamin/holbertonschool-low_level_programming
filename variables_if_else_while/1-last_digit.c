#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Checks the last digit if it's either: >6, <5 or it's a 0.
 * Retrun: Always return 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	} else if (lastDigit < 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	} else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	return (0);
}
