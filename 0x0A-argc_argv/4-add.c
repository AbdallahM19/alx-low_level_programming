#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: str
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;
	char *d;

	while (--argc)
	{
		for (d = argv[argc]; *d; d++)
			if (*d < '0' || *d > '9')
			{
				printf("Error\n");
				return (1);
			}
		a += atoi(argv[argc]);
	}

	return (0);
}
