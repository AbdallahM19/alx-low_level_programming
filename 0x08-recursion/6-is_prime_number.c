#include"main.h"

/**
 * is_prime_number - Check if a number is a prime number.
 *
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int num_prime(int n, int n2);
int is_prime_number(int n)
{
	return (num_prime(n, 2));
}

/**
 * num_prime - check the prime num
 * @n: int
 * @n2: int
 * return: prime num
*/

int num_prime(int n, int n2)
{
	if (n % n2 == 0 || n <= 1)
			return (0);
	else if (n2 >= n && n >= 2)
		return (1);
	else
		return (num_prime(n, n2 + 1));
}
