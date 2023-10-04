#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Write a function that returns
 * a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, l;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (l = 0; str[l]; l++)
		p[l] = str[l];

	return (p);
}
