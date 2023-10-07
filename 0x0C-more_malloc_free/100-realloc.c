#include "main.h"

/**
 * char *_realloc - Write a function that reallocates
 * a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: new_size > old_size, the “added” mem not be initialized
 * new_size == old_size do not do anything and return ptr
 * ptr is NULL, then the call is equivalent to malloc(new_size)
 *			for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	n = 0;
	while (n < old_size && n < new_size)
	{
		new_ptr[n] = ((char *)ptr)[n];
		n++;
	}
	free(ptr);
	return (new_ptr);
}
