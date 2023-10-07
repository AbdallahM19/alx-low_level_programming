#include "main.h"

/**
 * array_range - Write a function that creates an array of integers.
 * @min: min num
 * @max: max num
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *integer;
	int lenght, i;

	if (min > max)
		return (NULL);
	lenght = max - min + 1;
	integer = malloc(sizeof(int) * lenght);
	if (integer == NULL)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		integer[i] = min;
		i++;
		min++;
	}
	return (integer);
}
