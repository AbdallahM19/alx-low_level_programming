#include"main.h"

/**
 * _puts - Write a function that prints a string,
 *              followed by a new line, to stdout.
 *
 * @str: string parameter to print
 * Return: 0 success
*/

void _puts(char *str)
{
	while (*str != NULL)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
