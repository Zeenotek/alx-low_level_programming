#include "main.h"

/**
 * _sqrt_helper - Finds the natural square root of a number using recursion
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root, or -1 if no natural square root exists
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);
	if (guess * guess > n)
	return (-1);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt_helper(n, 0));
}
