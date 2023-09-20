#include"main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 / postive / negative
*/

int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			b = (*s1 - *s2);
		}
	}

	return (b);
}
