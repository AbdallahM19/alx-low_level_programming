#include"main.h"

/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @a: pointer char input array
 *
 * Return: @a
*/

char *cap_string(char *a)
{
	int b = 0;

	while (a[b])
	{
		while (a[b] != '\0' && (!(a[b] >= 'a' && a[b] <= 'z')))
		{
			if (a[b - 1] == ' ' ||
				a[b - 1] == '\t' ||
				a[b - 1] == '\n' ||
				a[b - 1] == ',' ||
				a[b - 1] == ';' ||
				a[b - 1] == '.' ||
				a[b - 1] == '!' ||
				a[b - 1] == '?' ||
				a[b - 1] == '"' ||
				a[b - 1] == '(' ||
				a[b - 1] == ')' ||
				a[b - 1] == '{' ||
				a[b - 1] == '}' ||
				b == 0)
			{
				a[b] -= 32;
			}
			b++;
		}
	}
	return (a);
}
