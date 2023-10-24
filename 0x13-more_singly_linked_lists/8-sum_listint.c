#include "lists.h"

/**
 * sum_listint - Write a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: Pointer the head
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
