#include"main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: pointer to resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char a, b;

	a = 0;

	while (dest[a])
		a++;
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
