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
	va_list a;
	unsigned int i;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
