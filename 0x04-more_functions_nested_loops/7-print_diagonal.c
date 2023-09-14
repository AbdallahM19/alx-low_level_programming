#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int chan, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (chan = 1; chan <= n; ++chan)
		{
			for (space = 1; space <= chan; ++space)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
