#include "search_algos.h"

/**
 * minimum - return the min of two integers.
 * @x1: int
 * @x2: int
 * Return: if x1 <= x2, returns x1, else returns x2.
*/

size_t minimum(size_t x1, size_t x2)
{
	if (x1 <= x2)
		return (x1);
	else
		return (x2);
}

/**
 * binary_search_h - Write a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @l: first index
 * @h: last index
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

int binary_search_h(int *array, size_t l, size_t h, int value)
{
	int low = l, high = h, x, i;

	if (!array || !l || !h || !value)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (x = low; x < high; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);
		i = (low + high) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}


/**
 * exponential_search - Write a function that searches for a value
 * in a sorted array of integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, i = 1;

	if (!array || !size || !value)
		return (-1);

	while ((i < size && array[i] < value))
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	high = minimum(i, size - 1);
	printf(
		"Value found between indexes [%lu] and [%lu]\n", low, high
	);
	return (binary_search_h(array, low, high, value));
}
