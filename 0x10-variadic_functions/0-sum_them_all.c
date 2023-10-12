#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the
 * sum of all its parameters.
 * @n: num
 * @...: A variable number of paramters
 * Return: If n == 0 - 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list a;

	if (n == 0)
		return (0);
	va_start(a, n);
	while (i--)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
