#include "main.h"

/**
 * char *string_nconcat - Write a function that concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: the pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	str = malloc(len1 + n + 1);

	if (str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(str, s1);
	else
		str[0] = '\0';

	strncat(str, s2, n);

	return (str);
}
