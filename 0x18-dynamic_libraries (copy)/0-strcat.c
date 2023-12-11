#include"main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b]; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
