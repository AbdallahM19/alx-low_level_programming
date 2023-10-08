#include "main.h"

/**
 * put_s - checks if a string includes a non-digit char
 * @s: str
 * Return: 0 if a non-digit, 1 otherwise
 */

int put_s(char *s)
{
	for (int a = 0; s[a]; a++)
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
	}
	return (1);
}

/**
 * str_len - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int str_len(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
		;
	return (b);
}

/**
 * val_input - Validate-input
 * @argc: Num arguments
 * @argv: Array of arguments
 * Return: 1 if validation succeeds, 0 otherwise
 */

int val_input(int argc, char *argv[])
{
	if (argc != 3 || !put_s(argv[1]) || !put_s(argv[2]))
	{
		printf("Error\n");
		exit(98);
		return (0);
	}
	return (1);
}

/**
 * mul_strings - Multiply two positive integer strings
 * @s1: First int +
 * @s2: Second int +
 * @res: Array to store the result of multiplication
 * Return: Len res
 */

int mul_strings(char *s1, char *s2, int *res)
{
	int len1 = str_len(s1);
	int len2 = str_len(s2);
	int len = len1 + len2 + 1;
	int i, t, digit1, digit2, a = 0;

	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		t = 0;

		for (len2 = str_len(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			t += res[len1 + len2 + 1] + (digit1 * digit2);
			res[len1 + len2 + 1] = t % 10;
			t /= 10;
		}

		if (t > 0)
			res[len1 + len2 + 1] += t;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}

	if (!a)
		_putchar('0');

	return (len - 1);
}

/**
 * main - Entry point
 * @argc: Num argu
 * @argv: Array of argu
 * Return: 0 success, 1 failure
 */

int main(int argc, char *argv[])
{
	int *result;
	int result_len;
	int len1 = str_len(argv[1]);
	int len2 = str_len(argv[2]);

	if (!val_input(argc, argv))
		return (1);

	result = malloc(sizeof(int) * (len1 + len2 + 1));
	if (!result)
		return (1);

	result_len = mul_strings(argv[1], argv[2], result);
	_putchar('\n');
	free(result);

	return (0);
}
