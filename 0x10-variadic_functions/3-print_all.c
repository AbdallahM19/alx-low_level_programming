#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything.
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *e = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", e, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", e, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", e, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", e, s);
					break;
				default:
					i++;
					continue;
			}
			e = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
