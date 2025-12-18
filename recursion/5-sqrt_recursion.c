#include "main.h"

int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function to find square root recursively
 * @n: original number
 * @guess: current guess
 *
 * Return: square root or -1
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}