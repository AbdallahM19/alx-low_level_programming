#include "search_algos.h"

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

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (x = low; x < high; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);
	i = (low + high) / 2;
	if (array[low] == value)
		return (low);
	if (array[low] != array[high])
	{
		if (array[i] >= value)
			return (binary_search_h(array, low, i, value));
		else
			return (binary_search_h(array, i + 1, high, value));
	}
	return (-1);
}

/**
 * advanced_binary - Write a function that searches for a value in
 * a sorted array of integers.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (!array || !size)
		return (-1);
	return (binary_search_h(array, low, high, value));
}
