#include"main.h"

/**
 * _memcpy - Write a function that copies memory area.
 *
 * @dest: where add the copy
 * @src: what is copy
 * @n: n number of @src
 *
 * Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
