#include"main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: string parameter input
 * Return: length string
 */

int _strlen(char *s)
{
	int strlen;

	for (strlen = 0; *s != '\0'; s++)
		strlen++;

	return (strlen);
}
