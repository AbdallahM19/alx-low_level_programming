#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == 0)
		return (NULL);
	while (size--)
		a[size] = c;
	return (a);
}
