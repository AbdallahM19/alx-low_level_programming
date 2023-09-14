#include"main.h"

/**
 * print_most_numbers - print 0 - 9
 *                 don't print (2 and 4)
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int num;


	for (num = 0; num < 10; num++)
		if (num == 2 || num == 4)
			continue;
		else
			printf(num + 48);
	_putchar('\n');
}
