#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, but for multiples of 3
 *        prints "Fizz" instead of the number and for the multiples of 5
 *        prints "Buzz". For numbers which are multiples of both
 *        three and five,
 *        it prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			if (i >= 10)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		if (i < 100)
			putchar(' ');
	}
	return (0);
}
