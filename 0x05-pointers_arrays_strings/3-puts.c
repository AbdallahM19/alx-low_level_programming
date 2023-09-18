#include"main.h"

/**
 * _puts - Write a function that prints a string,
 *		followed by a new line, to stdout.
 *
 * @str: string parameter to print
 * Return: 0 success
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + '48');
		str++;
	}
	_putchar('\n');
}
