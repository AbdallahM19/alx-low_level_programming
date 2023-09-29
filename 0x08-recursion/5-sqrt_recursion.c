#include"main.h"

/**
 * cal_sqrt - Helper function to calculate the square
 * @a: The number
 * @b: The current guess
 * Return: The natural square root of n,
 * or -1 if n does not have a natural square root.
 */

int cal_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	else
		return (calculate_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - Write a function that returns the
 * natural square root of a number.
 * @n: int
 * Return: If n does not have a natural square root
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (cal_sqrt(n, 1));
}
