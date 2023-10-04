#include "main.h"
#include <stdlib.h>

/**
 * _len - len of str
 * @a: str
 * Return: int
 */

int _len(char *a)
{
	int s;

	for (s = 0; a[s] != '\0'; s++)
	{
		;
	}
	return (s);
}

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: char
 * @s2: char
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *z;
	int w1, w2, b;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	w1 = _len(s1);
	w2 = _len(s2);

	z = malloc((w1 + w2 + 1) * sizeof(char));

	if (z == NULL)
		return (NULL);
	for (b = 0; b <= w1 + w2; b++)
	{
		if (b < w1)
		{
			z[b] = s1[b];
		}
		else
		{
			z[b] = s2[b];
		}
	}

	z[b] = '\0';

	return (z);
}
