#include "lists.h"

/**
 * str_len - return len
 * all the elements of a list_t list.
 * @str: char
 * Return: Always a
 */
int str_len(char *str)
{
	int a = 0;

	if (!str)
		return (0);
	while (*str++)
		a++;
	return (a);
}

/**
 * print_list - Write a function that prints
 * all the elements of a list_t list.
 * @h: pointer
 * Return: size of len
*/
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("[%d] %s\n", str_len(h->str), h->str ? h->str : "nil");
		h = h->next;
		a++;
	}
	return (a);
}
