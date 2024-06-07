#include "main.h"

/**
 * is_prime_number_helper - helps to check if a number is a prime number.
 * @n: the number.
 * @i: the divisor.
 *
 * Return: 1 if prime number and 0 if isnt.
 */
int is_prime_number_helper(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_number_helper(n, i + 1));
}

/**
 * is_prime_number - a function to know if a num is prime or not.
 * @n: the number to be checked.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number_helper(n, 2));
}
