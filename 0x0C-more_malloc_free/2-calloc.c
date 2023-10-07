#include"main.h"

/**
 * *_memset - fills memory with a constant byte
 * @p: pointer memory
 * @z: char
 * @t: num of times to copy b
 * Return: pointer to the memory area s
*/

char *_memset(char *p, char z, unsigned int t)
{
	unsigned int n;

	for (n = 0; n < t; n++)
		p[n] = z;

	return (p);
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: an array of nmemb elements
 * @size: elements of size bytes each
 * Return: a pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, total_size);

	return (ptr);
}
