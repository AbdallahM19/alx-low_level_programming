#include"main.h"

/**
 * cap_string - a function that encodes a string into 1337
 *
 * @a: string input
 *
 * Return: @a
*/

char *cap_string(char *a)
{
	int b, d;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (d = 0; d < 10; d++)
		{
			if (a[b] == s1[d])
			{
				a[b] = s2[d];
			}
		}
	}
	return (a);
}
