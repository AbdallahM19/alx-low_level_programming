#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from n to m
 * @n: The first number
 * @m: The second number
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int num = 0;

	while (xor > 0)
	{
		num += xor & 1;
		xor >>= 1;
	}
	return (num);
}
