#include"main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @a: string input
 *
 * Return: encodes a string using
*/

char *rot13(char *a)
{
	int b;
	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = a;

	while (*a)
	{
		for (b = 0; b <= 52; b++)
		{
			if (*a == rot13[b])
			{
				*a = Rot13[b];
				break;
			}
		}
		a++;
	}
	return (str);
}
