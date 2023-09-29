#include"main.h"

/**
 * is_prime_number - Check if a number is a prime number.
 *
 * @n: The number to check.
 * @n2: int
 * Return: 1 if n is prime, 0 otherwise.
 */

int num_prime(int n, int n2);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (num_prime(n, n - 1));
}

/**
 * num_prime - check the prime num
 * @n: int
 * @n2: int
 * Return: prime num
*/

int num_prime(int n, int n2)
{
	if (n2 == 1)
		return (1);
	if (n % n2 == 0 && n2 > 0)
		return (0);
	return (actual_prime(n, n2 - 1));

}
