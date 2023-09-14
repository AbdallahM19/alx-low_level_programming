#include"main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: is the number of times the _ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int charn;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (charn = 1; charn <= n; charn++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
}
