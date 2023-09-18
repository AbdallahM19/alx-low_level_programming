#include"main.h"

/**
 * print_rev - Write a function that prints a string,
 *				in reverse, followed by a new line.
 *
 * @s: string parameter input
 * Return: Nothing
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;

	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
