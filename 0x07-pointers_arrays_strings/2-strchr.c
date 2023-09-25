#include"main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 *
 * @s: pointer
 * @c: char
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 *		null if not
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s);
		}
	}
	return ('\0');
}
