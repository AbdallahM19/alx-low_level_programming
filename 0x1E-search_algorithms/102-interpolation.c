#include "search_algos.h"
/**
 * interpolation_search -Write a function that searches for a value
 * in a sorted array of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (!array || !size || !value)
		return (-1);

	while (
		(array[high] != array[low]) &&
		(value >= array[low]) &&
		(value <= array[high])
	)
	{
		pos = low + (
			(
				(double)(high - low) / (array[high] - array[low])
			) * (value - array[low])
		);
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}
	pos = low + (
		(
			(double)(high - low) / (array[high] - array[low])
		) * (value - array[low])
	);
	printf(
		"Value checked array[%lu] is out of range\n", pos
	);
	return (-1);
}
