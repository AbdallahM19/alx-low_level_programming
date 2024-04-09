#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = (size - 1), x, i;

	if (!array || !size || !value)
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
