#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to compute the last digit of
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	_putchar(abs(n % 10) + '0');
	return (abs(n % 10));
}
