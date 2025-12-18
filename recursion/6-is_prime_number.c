#include "main.h"

int find_prime(int n, int divide, int count);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1 || find_prime(n, 2, 1) > 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * find_prime - helper function to count divisors
 * @n: number to check
 * @divide: current divisor
 * @count: current count of divisors
 *
 * Return: total number of divisors
 */
int find_prime(int n, int divide, int count)
{
	if (divide == n)
	{
		return (count + 1);
	}
	else if (n % divide == 0)
	{
		return (find_prime(n, divide + 1, count + 1));
	}
	else
	{
		return (find_prime(n, divide + 1, count));
	}
}
