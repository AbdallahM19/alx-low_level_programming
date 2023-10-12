#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers
 * followed by a new line.
 * @separator: string
 * @n: num
 * @...: A variable number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list a;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(a, i);
	while (i--)
	{
		printf("%d%s", va_arg(a, int),
			i ? (separator ? separator : "") : "\n");
	}
	va_end(a);
}
