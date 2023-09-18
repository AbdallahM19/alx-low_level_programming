#include"main.h"

/**
 * _puts - Write a function that prints a string,
 *              followed by a new line, to stdout.
 *
 * @str: string parameter to print
 */

void _puts(char *str)
{
	while (*str != NULL)
	{
		_putchar(*str + 0);
		*str++;
	}
	_putchar('\n');
}
