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
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l] != '\0')
		l++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= l; i++)
			p[i] = str[i];
	}

	return (p);
}
