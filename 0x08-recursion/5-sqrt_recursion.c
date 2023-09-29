#include"main.h"

/**
 * _sqrt_recursion - find natural sqrt root
 * @n: int
 * @sum: sqrt root
 * Return: int
*/

int sqrt(int n, int sum);
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - find sqrt root
 * @n: int
 * @sum: int sqrt root
 * Return: int
*/

int sqrt(int n, int sum)
{
	if (sum * sum == n)
		return (sum);
	else if (sum * sum < n)
		return (sqrt(n, sum + 1));
	else
		return (-1);
}
