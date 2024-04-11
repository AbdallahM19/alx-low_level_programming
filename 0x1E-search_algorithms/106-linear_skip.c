#include "search_algos.h"

/**
 * linear_skip - Write a function that searches for a value in
 * a sorted skip list of integers.
 * @list: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * Return: the first index where value is located else -1
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head, *node;

	if (!list)
		return (NULL);
	head = list;
	while ((head) && (head->express) && (head->express->n < value))
	{
		printf("Value checked at index [%lu] = [%d]\n",
			head->express->index, head->express->n
		);
		head = head->express;
	}
	node = head;
	while ((node) && (node->next != node->express))
		node = node->next;
	if (head->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			head->express->index, head->express->n
		);
		printf("Value found between indexes [%lu] and [%lu]\n",
			head->index, head->express->index
		);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			head->index, node->index
		);
	}
	while (head != node && head->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			head->index, head->n
		);
		head = head->next;
	}
	printf("Value checked at index [%lu] = [%d]\n",
		head->index, head->n
	);
	if (head != node)
		return (head);
	return (NULL);
}
