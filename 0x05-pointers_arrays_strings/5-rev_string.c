#include"main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: string parameter input
 * Return: Nothing
*/

void rev_string(char *s)
{
	int a, b;
	char n;

	for (a = 0; s[a] != '\0'; a++)
		;
	for (b = 0; b < a / 2; b++)
	{
		n = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = n;
	}
	_putchar('\n');
}
