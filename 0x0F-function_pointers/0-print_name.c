#include "function_pointers.h"

/**
 * print_name - a function to print a name.
 * @name: A pointer to a string
 * @f: A function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
