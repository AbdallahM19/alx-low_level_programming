#include "main.h"

/**
 * put_s - checks if character is a digit
 * @s: char
 * Return: 1 if digit, 0 otherwise
 */

int put_s(int s)
{
	return (s >= '0' && s <= '9');
}

/**
 * str_len - returns the length
 * @s: str
 * Return: int len of str
 */
int str_len(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * handle_error - handle error for main
 */

void handle_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * mul_numbers - multy two + int str
 * @s1: First + int str
 * @s2: Second + int str
 * Return: Result of mul as a string
 */

char *mul_numbers(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = str_len(s1);
	l2 = str_len(s2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		handle_error();
	while (a--)
		r[a] = 0;
	for (l1--; l1 >= 0; l1--)
	{
		if (!put_s(s1[l1]) || !put_s(s2[l2 - 1]))
		{
			free(r);
			handle_error();
		}
		a = s1[l1] - '0';
		c = 0;
		for (l2 = str_len(s2) - 1; l2 >= 0; l2--)
		{
			if (!put_s(s2[l2]))
			{
				free(r);
				handle_error();
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}

/**
 * main - multy two + num
 * @argc: num of argu
 * @argv: arr argu
 * Return: always 0 (Success)
 */

int main(int argc, char **argv)
{
	char *res;
	int a, c, x;

	if (argc != 3 || !put_s(argv[1][0]) || !put_s(argv[2][0]))
		handle_error();
	x = str_len(argv[1]) + str_len(argv[2]);
	res = mul_numbers(argv[1], argv[2]);
	c = 0;
	a = 0;

	while (c < x)
	{
		if (res[c])
			a = 1;
		if (a)
			_putchar(res[c] + '0');
		c++;
	}

	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
