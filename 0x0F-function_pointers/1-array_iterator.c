#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to an array of integers.
 * @size: The size of the array.
 * @action: A function pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
	else
		return;
}
