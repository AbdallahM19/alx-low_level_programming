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
 * jump_search - Write a function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t low, high = 0, i;

	if (!array || !size || !value)
		return (-1);

	i = sqrt(size);

	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			high, array[high]
		);
		low = high;
		high += i;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		low, high
	);
	while (low <= minimum(high, size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n",
			low, array[low]
		);
		if (array[low] == value)
			return (low);
		low++;
	}
	return (-1);
}
