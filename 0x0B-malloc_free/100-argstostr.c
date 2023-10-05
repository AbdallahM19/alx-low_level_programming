#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strlen - len of str
 * @a: str
 * Return: int
 */

int _strlen(char *a)
{
	int len = 0;

	while (a[len])
		len++;

	return (len);
}

/**
 * argstostr - Write a function that concatenates
 * all the arguments of your program.
 * @ac: int
 * @av: 2 array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, nl = 0, b, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nl++)
		nl += _strlen(av[i]);

	str = malloc(sizeof(char) * nl + 1);
	if (str == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; l++)
		{
			str[l] = av[i][b];
			b++;
		}
		str[l] = '\n';
		l++;
	}

	str[l] = '\0';

	return (str);
}
