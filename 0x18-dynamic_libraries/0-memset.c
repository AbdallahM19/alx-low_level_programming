#include"main.h"
/**
 * _memset - Write a function that fills memory with a constant byte.
 *
 * @s: input pointer to char
 * @b: input variable of char
 * @n: unsigned int var
 *
 * Return: A pointer @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
