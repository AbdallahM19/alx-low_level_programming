#include "main.h"

/**
 * binary_to_uint - Write a function that converts
 * a binary number to an unsigned int.
 * @b: The binary string
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = (n << 1) | (*b - '0');
		b++;
	}
	return (n);
}
