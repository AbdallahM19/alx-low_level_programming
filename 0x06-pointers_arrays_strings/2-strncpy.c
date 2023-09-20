#include"main.h"

/**
 * _strncpy - Write a function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: pointer to resulting string @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int a, b;
for (a = 0; a < n && src[a]; a++)
{
	dest[a] = src[a];
}
while (a < n)
{
	dest[a] = '\0';
	a++;
}
return (dest);
}
