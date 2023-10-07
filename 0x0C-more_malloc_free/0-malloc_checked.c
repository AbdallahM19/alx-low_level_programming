#include "main.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: unsigned int
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
