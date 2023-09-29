#include"main.h"

/**
 * _strlen_recursion - Write a function that returns
 * the length of a string.
 *
 * @s: strlen
 *
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	int numl = 0;

	if (*s > '\0')
		numl = _strlen_recursion(s + 1) + 1;
	return (numl);
}
