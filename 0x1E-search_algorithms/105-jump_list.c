#include "search_algos.h"

/**
 * jump_list - Write a function that searches for a value in
 * a sorted list of integers using the Jump search algorithm.
 * @list: is a pointer to the first element of the array to search in
 * @size: is the number of nodes in list
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, x = sqrt(size);
	listint_t *head, *node;

	if (!list || !size)
		return (NULL);
	head = node = list;
	while ((node->index + 1 < size) && (node->n < value))
	{
		head = node;
		for (i += x; node->index < i; node = node->next)
		{
			if (node->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
			node->index, node->n
		);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
		head->index, node->index
	);
	while ((head->index < node->index) && (head->n < value))
	{
		printf("Value checked at index [%ld] = [%d]\n",
			head->index, head->n
		);
		head = head->next;
	}
	printf("Value checked at index [%ld] = [%d]\n",
		node->index, node->n
	);
	if (head->n == value)
		return (head);
	return (NULL);
}
