#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: int
 * @argv: pointer to an array str
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int a, b = 0, mon = atoi(argv[1]);
		int num[] = {25, 10, 5, 2, 1};

		for (a = 0; a < 5; a++)
		{
			if (mon >= num[a])
			{
				b += mon / num[a];
				mon = mon % num[a];
				if (mon % num[a] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
