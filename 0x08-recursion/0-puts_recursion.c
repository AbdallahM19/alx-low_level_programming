#include"main.h"

/**
 * _puts_recursion - Write a function that prints a string
 *				followed by a new line.
 *
 * @s: string
 *
 * Return: string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar (*s);
		s++;
		_puts_recursion(s);
	}
}
