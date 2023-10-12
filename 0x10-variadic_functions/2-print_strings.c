#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings
 * followed by a new line.
 * @separator: string
 * @n: number
 * @...: A variable number of strings to be printed.
 * Description: If separator is NULL, it is not printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
