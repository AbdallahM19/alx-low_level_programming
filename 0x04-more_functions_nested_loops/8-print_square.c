#include "main.h"

/**
 * print_square - print a square with (#)
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, col;

		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
