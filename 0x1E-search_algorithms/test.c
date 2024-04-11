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
	skiplist_t *current, *express, *past;

	if (!list)
		return (NULL);
	current = list, express = list->express;
	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			express->index, express->n);
		if (express->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, express->index);
			break;
		}
		past = current = express, express = express->express;
		if (express == NULL)
		{
			while (current->next != NULL)
				current = current->next;
			printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, current->index + 1);
			break;
		}}
	while (past && current != NULL &&
		express != NULL && current->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	while (past != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			past->index, past->n);
		past = past->next;
	}
	return (NULL);
}
