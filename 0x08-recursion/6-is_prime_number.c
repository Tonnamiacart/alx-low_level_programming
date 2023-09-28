#include <stdio.h>
#include "main.h"

/**
 * prime_check - This function checks to see if number is prime
 * @f: factor check
 * @p: possible prime number
 * Return: 1 or 0;
 */

int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}

/**
 * is_prime_number - This function states if number is prime
 * @n: paramter to be check
 * Return: 1 or 0;
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
