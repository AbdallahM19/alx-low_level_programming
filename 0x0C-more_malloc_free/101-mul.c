#include "main.h"

/**
 * put_s - checks if a string includes a non-digit char
 * @s: str
 * Return: 0 if a non-digit, 1 otherwise
 */

int put_s(int s)
{
	return (s >= 48 && s <= 57);
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

	for (int l1 = len1 - 1; l1 >= 0; l1--)
	{
		digit1 = s1[l1] - '0';
		t = 0;

		for (int l2 = len2 - 1; l2 >= 0; l2--)
		{
			digit2 = s2[l2] - '0';
			t += res[l1 + l2 + 1] + (digit1 * digit2);
			res[l1 + l2 + 1] = t % 10;
			t /= 10;
		}

		if (t > 0)
			res[l1 + len2 + 1] += t;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			printf("%d", res[i]);
	}

	if (!a)
		printf("0");

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

	if (argc != 3 || !put_s(argv[1]) || !put_s(argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	result = malloc(sizeof(int) * (str_len(argv[1]) + str_len(argv[2]) + 1));
	if (!result)
	{
		printf("Error\n");
		return (1);
	}

	result_len = mul_strings(argv[1], argv[2], result);
	printf("\n");
	free(result);

	return (0);
}
