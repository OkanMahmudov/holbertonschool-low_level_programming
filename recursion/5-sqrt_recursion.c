#include "main.h"

/**
 * sqrt_helper - helper function to find the square root.
 * @n: the number for which to find the square root.
 * @i: the current guess for the square root.
 *
 * Return: the square root if found, otherwise -1.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)  /* Base case: if i^2 is equal to n, we've found the square root */
	{
		return (i);
	}

	if (i * i > n)  /* If i^2 is greater than n, no square root exists */
	{
		return (-1);
	}

	return (sqrt_helper(n, i + 1));  /* Recursively check the next integer */
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of.
 *
 * Return: the square root if it exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);  /* Square root is not defined for negative numbers */
	}
	return (sqrt_helper(n, 0));  /* Start the recursion with i = 0 */
}
