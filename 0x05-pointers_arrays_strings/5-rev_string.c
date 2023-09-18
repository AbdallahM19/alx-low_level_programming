#include"main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: string parameter input
 * Return: Nothing
*/

void rev_string(char *s)
{
	int a;

	while (s[a])
	{
		_putchar(s[a]);
		a++;
	}
	while (s[a])
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
