#include "main.h"

/**
 * is_prime_helper - helper to check for prime recursively
 * @n: number
 * @i: current divisor
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if input integer is a prime number, otherwise 0
 * @n: number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
